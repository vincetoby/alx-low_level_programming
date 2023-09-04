#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append text
 * @text_content: strring of text to append to filename
 * Return: 1 on success, otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0, i, opened_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		count++; /*length of textcontent*/

	/*O_WRONLY says its writeonly*/
	/*O_APPEND says append text instead of overwrite*/
	opened_file = open(filename, O_WRONLY | O_APPEND);
	if (opened_file == -1) /*if opened file returns error*/
		return (-1);

	write(opened_file, text_content, count); /*write textcontent into openedfile*/

	close(opened_file);
	return (1);
}
