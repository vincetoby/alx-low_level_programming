#include "shell.h"

/**
 * handle_builtin - handles the built-ins in main
 * @buffer: string to check
 * Return: void
 */

void handle_builtin(char *buffer)
{
	if (_strncmp(buffer, "exit", 4) == 0) /*exit built-in*/
		handle_exit(buffer);
	else if (_strcmp(buffer, "env") == 0) /*env built-in*/
		handle_env();
	else if (_strncmp(buffer, "setenv", 6) == 0)
	{
	       	/* setenv built-in */
		char *var, *value;
		int tokens;

 		tokens = _token_counter(buffer, " ");
		if (tokens == 3)
		{
			var = strtok(buffer + 7, " ");/*"+ 7", skips the first 7 chars of buffer*/
			value = strtok(NULL, " ");
			handle_setenv(var, value);
		}
		else
			err_setenv(); /*prints custom err message*/
	}
       	else if (_strncmp(buffer, "unsetenv", 8) == 0)
	{
		char *var;
		int tokens = _token_counter(buffer, " ");

		if (tokens == 2)
		{
			var = strtok(buffer + 9, " ");
			handle_unsetenv(var);
		}
		else
			err_unsetenv();
	}
}
