#include "shell.h"

/**
 * _getenv - get environment
 * @var: name of the environment variable you want to retrieve
 * Return: the result of its search
 */

char *_getenv(const char *var)
{
	char *value = NULL, **env, *curr_var, *var_start;

	for (env = environ; *env != NULL; env++)/*iterate thru environ extern var*/
	{
		curr_var = *env;
		/*Check if current environ variable starts with varname*/
		if (_strncmp(curr_var, var, _strlen1(var)) == 0)
		{
			/*found match, extract value*/
			/*locate beginning of value containing "="*/
			var_start = _strchr(curr_var, '=');
			if (var_start != NULL)
			{
				/*Increment var_start to point to the value*/
				var_start = var_start + 1;
				value = var_start;
				break; /*exit loop as the value has been found*/
			}
		}
	}
	return (value); /*return value or null if value aint found*/
}
