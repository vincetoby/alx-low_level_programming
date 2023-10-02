#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX STDOUT
 * @filename: file to read
 * @letters: number of letters to read
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened_file, read_pro, writer;
	char *temp;

	if (filename == NULL) /*Checks if filename is NULL*/
		return (0);

	temp = malloc(letters); /*Allocate memory for buffer to store the read data*/
	if (temp == NULL)
		return (0);

	opened_file = open(filename, O_RDONLY); /*open file for reading*/

	if (opened_file == -1) /* if it returns an error, free malloc for temp*/
	{
		free(temp);
		return (0);
	}

	read_pro = read(opened_file, temp, letters);/*read data*/
							/*from opened file into temp*/
							/*read_pro copies data of the read process*/

	writer = write(STDOUT_FILENO, temp, read_pro);/*Write the read data*/
							/*to the standard output (STDOUT)*/
							/*read_pro represents the number of bytes read*/

	close(opened_file); /*close the opened file*/

	return (writer);
}
