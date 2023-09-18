#include "shell.h"

/**
 * parser - tokenizes commandline args
 * @std_input: input from keyboard
 * @argv: arguments variable for tokenized input
 * @argc: count of tokens
 */

void parser(char *std_input, char **argv, int *argc)
{
	/* Reset argc to 0 for each new command*/
	*argc = 0;
	int MAX_ARGC = 100;

	/* Tokenize the input using space as the delimiter*/
	char *token = strtok(std_input, " ");

	/* Iterate through tokens and store them in argv*/
	while (token != NULL && *argc < MAX_ARGC - 1)
	{
		argv[(*argc)++] = _strdup(token); /* Dynamically allocate memory */
		token = strtok(NULL, " ");
	}
	argv[*argc] = NULL; /* Null-terminate the argument list*/
}
