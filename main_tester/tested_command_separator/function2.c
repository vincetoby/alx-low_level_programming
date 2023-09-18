#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: ASCII code for  (s1[0] - s2[0])
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: data source
 * Return: dest
 */

char *_strcpy1(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * strncmp - compares a certain number of chars
 * @str1: first string to check
 * @str2: 2nd string to check in str1
 * @num: number of chars to check
 * Return:0 on success, Ascii code of str1 - str2
 */

int _strncmp(const char *str1, const char *str2, size_t num)
{
	while (num > 0)
	{
		if (*str1 == '\0' || (*str1 != *str2))
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		num--;
	}
	return (0);
}

/**
 * _token_counter - counts the number of tokens in a string
 * @str: string of tokens to count
 * @delim: delimiters
 * Return: number of tokens
 *

size_t _token_counter(const char *str, char *delim)
{
	size_t counter = 0;
	int inside_tok = 0, num_del; /*Indicates if we are inside a token*/
/*	char *cpy_del;

	if (str == NULL || delim == NULL)
		return (0);

	while (*str != '\0')
	{
		num_del = 0;
		cpy_del = delim;
		while (*cpy_del)
		{
			if (*str == *cpy_del)
			{
				num_del = 1;
				break;
			}
		}
		if (num_del)/*if str == cpydel making num_del 1*/
/*		{*/
		/* If we were inside a token, mark the end of the token*/
/*			if (inside_tok)
			{
				inside_tok = 0;
			}
		}	
        	else
		{
			/* If we were not inside a token, mark the start of a new token*/
/*			 if (!inside_tok)
			{
				inside_tok = 1;
				counter++;
			}
		}
		if (*str == '\0')
		{
			break; /* Exit the loop when the end of the string is reached*/
/*		}
		str++;
	}
	return (counter);
}*/
