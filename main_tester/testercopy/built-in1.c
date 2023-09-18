#include "shell.h"

/**
 * handle_exit - exits the shell
 * @buffer: char containing args 
 * Return: void
 */

void handle_exit(char *buffer)
{
	char *token = strtok(buffer, " "); /*check for args*/
	token = strtok(NULL, " ");		/*check for 2nd args*/

	if (token != NULL)
	{
		int exit_status = atoi(token);/*converts token to integer*/

		exit(exit_status);
	}
	else
		exit(0); /* exit the shell*/
}

/**
 * handle_env - print current environment
 * Return: void
 */

void handle_env()
{
	extern char **environ; /* to access and print all env variables*/
	char **env = environ;

	while (*env != NULL)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}

/**
 * handle_clear - print current environment
 * Return: void
 */

/*void handle_clear()
{
	system("clear");
}*/
