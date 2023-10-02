#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file name to create
 * @text_content: string of char to write in new file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int opened_file, count = 0, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)/*if textcontent is null, it becomes an empty strg*/
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		count++; /*get length of textcontent string*/

	/*O_CREAT creates file. If file already exist, it is ignored*/
	/*O_WRONLY is a flag that tells that the new file can only be written*/
	/*O_TRUNC truncates the file; if file already exists it gets deleted*/
	/*and the file is opened empty*/
	/*0600 is a hexadecimal representation for chmod u+rw*/
	opened_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (opened_file == -1)
		return (-1);

	write(opened_file, text_content, count);

	close(opened_file);
	return (1);
}
