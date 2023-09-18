#include "shell.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char *_strtok(char *str, const char *delim)
{
	static char *token = NULL;
	static bool endOfString = false;
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
/*
int main(void)
{
    char str[] = "This is a sample, string. Tokenize it!";
    const char delim[] = " ,.!";
    char *token;

    // Tokenize the string using custom_strtok
    token = _strtok(str, delim);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = _strtok(NULL, delim);
    }

    return 0;
}
*/
