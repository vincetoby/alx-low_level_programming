#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char buffer[MAX_BUFFER_SIZE], *argv[100];
	int argc = 0;
	const char *str = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin";

	char *path = getenv("PATH");
	if (path == NULL) /*1*/
	{
		path = strdup(str);
		if (path == NULL)
		{
    			perror("strdup");
			exit(EXIT_FAILURE);
		}

	}
	printf("PATH: %s\n", getenv("PATH"));/*debugging*/
	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2); /* Creates a prompt */
		ssize_t read_bytes = read(STDIN_FILENO, buffer, sizeof(buffer));

		if (read_bytes <= 0) /*checks end-of-file (ctrl-D)*/
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		buffer[read_bytes - 1] = '\0'; /*removes newline character*/

		handle_builtin(buffer); /*handles built_ins*/

		parser(buffer, argv, &argc);
		printf("Command to execute: %s\n", argv[0]);  /*debbugging*/

		if (argc > 0) /*num 1*/
		{
			char *full_path = path_search(argv[0]);

			if (full_path != NULL) /*If cmd exist in PATH and its executable*/
			{
				/*call execute command to execute*/
				int exit_status = execute_cmd(full_path, argv);
				for (int i = 0; i < argc; i++) /*num 2*/
				{
					free(argv[i]);
				}
				free(full_path);
			}
			else
			{
				command_not_found(argv[0]); /*calls customized error message*/
			}
			if (setenv("PATH", path, 1) != 0)/*reset path*/
                	{
                        	perror("setenv");
				 exit(EXIT_FAILURE);
                	}
		}
	}
	if (getenv("PATH") == NULL)
	{
		free(path); /*2*/
	}
	return (0);
}
