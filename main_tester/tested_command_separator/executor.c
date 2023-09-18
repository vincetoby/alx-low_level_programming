#include "shell.h"

/**
 * execute_cmd - executes the process in main
 * @cmd: command used
 * @argv: arguments
 * Return: 0 on success, else status
 */

int execute_cmd(const char *cmd, char *const argv[])
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		 /* Child process */
        	if (execve(cmd, argv, NULL) == -1)
		{
            		perror("execve");
            		exit(EXIT_FAILURE);
        	}
	}
	else
	{
        	/* Parent process */
		int status;
		wait(&status);
		return (status);
	}
	return (0);
}


void execute_cmd2(char *command);

/**
 * handle_cmd_separator - handles diff commands seperated by ";"
 * @input - string of commands
 * Return: void
 */

void handle_cmd_separator(const char *input)
{
	char input_copy[MAX_BUFFER_SIZE]; /*to Make a copy of the input*/
	char *commands[MAX_ARG_COUNT], *token;
	int command_count = 0;

	_strcpy1(input_copy, input);/*make the copy*/

	/*split the input line into separate commands using semicolons*/
	token = strtok(input_copy, ";");
	while (token != NULL && command_count < MAX_ARG_COUNT)
	{
		commands[command_count] = strdup(token);
		if (commands[command_count] == NULL)
		{
			perror("strdup");
			exit(EXIT_FAILURE);
		}
		command_count++;
		token = strtok(NULL, ";");
	}
	/* Execute each command*/
	for (int i = 0; i < command_count; i++)
	{
		execute_cmd2(commands[i]);
		free(commands[i]);
	}
}

/**
 * execute_cmd2 - executes command
 * @command: command to execute
 * Return: void
 */

void execute_cmd2(char *command)
{
	char *token, *argv[MAX_ARG_COUNT], *env[] = { NULL };
	int argc = 0;

	token = strtok(command, " \t"); /*parse cmd into args*/
	while (token != NULL && argc < MAX_ARG_COUNT - 1)
	{
		argv[argc] = token;
		argc++;
		token = strtok(NULL, " \t");
	}
	argv[argc] = NULL; /*Null-terminate the argument list*/
	if (argc > 0)
	{
		char *full_path;

		full_path = path_search(argv[0]);

		if (full_path != NULL)
		{
			pid_t child_pid = fork();/*exec command*/
			if (child_pid == 0)
			{
				if (execve(full_path, argv, env) == -1);
				{
					perror("execve");
					exit(EXIT_FAILURE);
				}
			}
			else if (child_pid == -1)
			{
				perror("fork");
			}
			else
			{
				wait(NULL);
				free(full_path);
			}
		}
		else
			command_not_found(argv[0]);
	}
}

int main(void) {
    char buffer[MAX_BUFFER_SIZE];

    while (1) {
        write(STDOUT_FILENO, "$ ", 2); /* Creates a prompt */
        ssize_t read_bytes = read(STDIN_FILENO, buffer, sizeof(buffer));

        if (read_bytes <= 0) /*checks end-of-file (ctrl-D)*/
        {
            write(STDOUT_FILENO, "\n", 1);
            break;
        }
        buffer[read_bytes - 1] = '\0'; /*removes newline character*/

        handle_cmd_separator(buffer); // Handle command separators
    }
    return 0;
}

