#include "shell.h"

/**
 * _atoi - Convert a char string to an integer.
 * @str: The pointer to char to convert
 * Return: the converted char
 */

int _atoi(char *str)
{
	int i = 0;
	unsigned int num = 0;
	int flag_num = 1;
	int flag = 0;

	while (str[i])
	{
		/* 45 is  ASCII code for the '-' (minus) */
		if (str[i] == 45) /*if a minus sign is found*/
		{
			flag_num = flag_num * (-1);
		}

		/*48 is ASCII code for the '0' character*/
		/*57 is ASCII code for the '9' character*/
		while (str[i] >= 48 && str[i] <= 57)
		{
			flag = 1; /*set to 1 to indicate that at least one numeric char found */
			num = (num * 10) + (str[i] - '0'); /*convert char to int*/
			i++;
		}
		if (flag == 1)
		{
			break;
		}
		i++;
	}
	num = num * flag_num;
	return (num);
}

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

/**
 * _strcspn - gets count of the first elements in str that is not in set
 * @str: input string
 * @set: set of characters to search for
 * Return: count of the first set of elements not found in str
 */

size_t _strcspn(const char *str, const char *set)
{
	size_t count = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; set[j] != '\0'; j++)
		{
			if (str[i] == set[j])
			{
				return (count);
			}
		}
		count++;
	}
	return (count);
}

/**
 * _strspn - checks num of elem in str that matches element in set
 * @str: main string to check
 * @set: string to check too
 * Return: count
 */

size_t _strspn(const char *str, const char *set)
{
	size_t count = 0, i, j;
	bool found;

	for (i = 0; str[i] != '\0'; i++)
	{
		found = false;
		for (j = 0; set[j] != '\0'; j++)
		{
			if (str[i] == set[j])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			/*Character not found in set, stop counting*/
			break;
		}
		count++;
	}
	return (count);
}

/**
 * _strtok - tokenizes a string
 * @str: string to tokenize
 * @delim: delimiter(s)
 * Return: pointer to tokens
 */

char *_strtok(char *str, const char *delim)
{
	static char *token;
	static bool endOfString;
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
