#include "shell.h"

/**
 * handle_exit - exits the shell
 * @buffer: char containing args
 * Return: void
 */

void handle_exit(char *buffer)
{
	int exit_status;
	char *token;

	token = _strtok(buffer, " "); /*check for args*/
	token = _strtok(NULL, " ");		/*check for 2nd args*/

	if (token != NULL)
	{
		exit_status = _atoi(token);/*converts token to integer*/
		exit(exit_status);
	}
	else
		exit(0); /* exit the shell*/
}

/**
 * handle_env - print current environment
 * Return: void
 */

void handle_env(void)
{
	/*extern char **environ is already defined in header*/
	/* to access and print all env variables*/
	char **env = environ;/*env copies contents of environ*/

	while (*env != NULL)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
