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
