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
 * _strcmp1 - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: ASCII code for  (s1[0] - s2[0])
 */

int _strcmp1(const char *s1, char *s2)
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
 * _strcpy1 - copies the string pointed to by src
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
 * _strncmp - compares a certain number of chars
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
 * _strchr - checks an input str for a char
 * @str: input string
 * @c: character
 * Return: pointer to string
 */

char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str); /*removes the const in char*/
		}
		str++;
	}
	return (NULL); /*ELSE RETURN null*/
}
