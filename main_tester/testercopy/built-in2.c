#include "shell.h"

/**
 * handle_setenv - sets env variable
 * var: variable to set
 * @str: str used to set
 * Return: void
 */

void handle_setenv(char *var, char *str)
{
	int value;
	char *msg, *msg2;

	if (var == NULL || str == NULL)
	{
		msg2 = "handle_setenv: Invalid arguments\n";
		write(STDERR_FILENO, msg2, _strlen(msg2));
		return;
	}
	value = setenv(var, str, 1);
	if (value != 0)
	{
		perror("setenv");
		/*msg = "setenv: Failed to set environment variable\n";*/
		/*write(STDERR_FILENO, msg, _strlen(msg));*/
	}
}

/**
 * handle_unsetenv - unsets env variable
 * env: variable to unset
 * Return: void
 */

void handle_unsetenv(char *env)
{
	int value;
	char *msg, *msg2;

	if (env == NULL)
	{
		msg2 = "handle_unsetenv: Invalid arguments\n";
		write(STDERR_FILENO, msg2, _strlen(msg2));
		return;
	}

	value = unsetenv(env);
	if (value != 0)
	{
		perror("unsetenv");
		/*msg = "unsetenv: Failed to unset environment variable\n";*/
		/*write(STDERR_FILENO, msg, _strlen(msg));*/
	}
}
