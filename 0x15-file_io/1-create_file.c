#include "holberton.h"

/**
* create_file - creates a file if possible
* Return: 1 on success, -1 on failure
* @filename: name of the new file
* @text_content: what to put in the file
*/
int create_file(const char *filename, char *text_content)
{
	int filenum, numwrit, len;

	if (!filename)
		return (-1);
	filenum = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (filenum == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (len = 0; text_content[len];)
		len++;
	numwrit = write(filenum, text_content, len);
	if (numwrit == -1)
		return (-1);
	return (1);
}
