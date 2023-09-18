#include "shell.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _strtok - tokenizes a string
 * @str: string to tokenize
 * @delim: delimiter(s)
 * Return: pointer to tokens
 */

char *_strtok(char *str, const char *delim)
{
	static char *token;
	static bool endOfString;
	char *begin;

	/*If str is not NULL, initialize token*/
	if (str != NULL)
	{
		token = str;
		endOfString = false;
	}
	/* If token is NULL or we have reached the end of the string, return NULL*/
	if (token == NULL || endOfString)
	{
		return (NULL);
	}
	/* Find the start of the next token (skip leading delimiters)*/
	begin = token + _strspn(token, delim);

	/* If there are no more tokens, set endOfString and return NULL*/
	if (*begin == '\0')
	{
		endOfString = true;
		return (NULL);
	}
	/* Find the end of the token (skip non-delimiters)*/
	token = begin + _strcspn(begin, delim);

	/* If this is not the end of the string, terminate the token*/
	if (*token != '\0')
	{
		*token = '\0';
		token++;
	}
	return (begin);
}
