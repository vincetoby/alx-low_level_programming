#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * num_words - counts number of words
 * @s: string to be accessed
 * Return: number of words
 */

int num_words(char *s)
{
	int wcount = 0, i, words = 0;
	/**
	 * wcount is count of each letter of words
	 * i is for looping over string
	 * words is number of words in string
	 */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			wcount = 0;
		}
		else if (wcount == 0)
		{
			wcount = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - splits strings into words
 * @str: string to split
 * Return: pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 * If your function fails, it returns NULL
 */

char **strtow(char *str)
{
	int i, j = 0, len = 0, wcount = 0, words;
	char **str2, *wrd;
	int startwrd, endwrd;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	words = num_words(str);
	if (words == 0)
		return (NULL);
	str2 = malloc(sizeof(char *) * len);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wcount != 0)
			{
				endwrd = i;
				wrd = malloc(sizeof(char) * (wcount + 1));
				if (wrd == NULL)
					return (NULL);
				while (startwrd < endwrd)
				{
					*wrd = str[startwrd];
					wrd++;
					startwrd++;
				}
				*wrd = '\0';
				str2[j] = wrd - wcount;
				j++;
				wcount = 0;
			}
		}
		else if (wcount++ == 0)
			startwrd = i;
	}
	str2[j] = NULL;
	return (str2);
}
/**
 * i, j, len, wcount
 * @i: used for looping
 * @len: length of string(str)
 * @wcount: length of each word in string
 * *str2, wrd, startwrd, endwrd
 * @str2: new space for full string
 * @wrd: space for each word, just like a 2d array
 * @startwrd: beginning of each word
 * @endwrd: end of each word
 */
