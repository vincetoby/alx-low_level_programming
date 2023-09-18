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
}

/**
 * handle_set_unset - handles setenv and unsetenv
 * @buffer: str to check
 * Return: void
 */

void handle_set_unset(char *buffer)
{
	if (_strncmp(buffer, "setenv", 6) == 0)
	{
		/* setenv built-in */
		char *var, *value;
		int tokens;

		tokens = _token_counter(buffer, " ");
		if (tokens == 3)
		{
			var = _strtok(buffer + 7, " ");/*"+ 7", skips the first 7 chars of buffer*/
			value = _strtok(NULL, " ");
			/*debugging statement below*/
			/*printf("Debug: buffer='%s', var='%s', value='%s'\n", buffer, var, value)*/
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
			var = _strtok(buffer + 9, " ");
			handle_unsetenv(var);
		}
		else
			err_unsetenv();
	}
}

/**
 * handle_builtin2 - handles the built-ins in main
 * @buffer: string to check
 * Return: void
 */

void handle_builtin2(char *buffer)
{
	char *arg;

	if (_strncmp(buffer, "cd", 2) == 0)
	{
		arg = buffer + 3; /*skip cd and space to get to argument*/
		change_dir((arg[0] == '\0') ? _getenv("HOME") : arg);
	}
}

/**
 * change_dir - changes directory
 * @dir: directory to change to
 * Return: void
 */

void change_dir(const char *dir)
{
	char buffer[MAX_BUFFER_SIZE * 2], *msg;
	char curr_path[MAX_BUFFER_SIZE], prev_path[MAX_BUFFER_SIZE];
	size_t curr_path_len, prev_path_len, buffer_len;
	static char prev_dir[MAX_BUFFER_SIZE];

	if (getcwd(prev_path, sizeof(prev_path)) == NULL)
	{
		perror("getcwd");
		exit(EXIT_FAILURE);
	}
	if (_strcmp1(dir, "-") == 0) /*handles "cd -"*/
	{
		if (_strlen(prev_dir) == 0)
		{
			msg = "cd: No previous directory\n";
			write(STDOUT_FILENO, msg, _strlen(msg));
			return;
		}
		dir = prev_dir; /*changes to prev dir*/
	}
	if (chdir(dir) == -1) /*change directory main func*/
		perror("chdir");
		/*exit(EXIT_FAILURE);*/
	if (getcwd(curr_path, sizeof(curr_path)) == NULL)
	{
		perror("getcwd");
		exit(EXIT_FAILURE);
	}
	prev_path_len = _strlen(prev_path);
	curr_path_len = _strlen(curr_path);
	memcpy(buffer, "Current directory: ", 19);
	memcpy(buffer + 19, curr_path, curr_path_len);
	memcpy(buffer + 19 + curr_path_len, "\nPrevious directory: ", 21);
	memcpy(buffer + 19 + curr_path_len + 21, prev_path, prev_path_len);
	memcpy(buffer + 19 + curr_path_len + 21 + prev_path_len, "\n", 1);

	buffer_len = 19 + curr_path_len + 21 + prev_path_len + 1;
	write(STDOUT_FILENO, buffer, buffer_len);
	_strcpy(prev_dir, prev_path);/*update prev_dir*/
}

