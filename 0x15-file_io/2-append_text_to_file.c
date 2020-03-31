#include "holberton.h"

/**
* append_text_to_file - appends text to the end of a file
* Return: 1 on success, -1 on failure
* @filename: name of the file
* @text_content: null terminated string to add to end of file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int filenum, len, numwritten;

	if (!filename)
		return (-1);
	filenum = open(filename, O_APPEND | O_WRONLY, 0600);
	if (filenum == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (len = 0; text_content[len];)
		len++;
	numwritten = write(filenum, text_content, len);
	if (numwritten == -1)
		return (-1);
	close(filenum);
	return (1);
}
