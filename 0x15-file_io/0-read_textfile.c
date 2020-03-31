#include "holberton.h"

/**
* read_textfile - reads a file and prints to standard output
* Return: number of lettes it oculd read and print
* @filename: the name of the file to read
* @letters: numbers of letters it should read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filenum, numread, numwritten;
	char *buf;

	if (!filename)
		return (0);
	filenum = open(filename, O_RDONLY);
	if (filenum == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	numread = read(filenum, buf, letters);
	close(filenum);
	numwritten = write(1, buf, numread);
	free(buf);
	if (numwritten != numread)
		return (0);
	return (numwritten);

}