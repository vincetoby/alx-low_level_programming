#include "main.h"

/**
 * cap_string - capitalizes first letter of the words in a string.
 * @s: string to be analyzed.
 *
 * Return: String with all words capitalized.
 */

char *cap_string(char *s)
{
	int i, j;
	int a[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == a[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
