#include "holberton.h"

/**
* main - copies one file to another
* Return: an integer depending on if the function succeeded
* @argc: number of args
* @argv: the list of args
*/
int main(int argc, char *argv[])
{
	int from_num, to_num, read_num, writ_num, cl1, cl2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_num = open(argv[1], O_RDONLY);
	if (from_num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	to_num = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to_num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	buffer = malloc(1024);
	if (!buffer)
		exit(-1);
	for (writ_num = 1024; writ_num == 1024;)
	{
		read_num = read(from_num, buffer, 1024);
		writ_num = write(to_num, buffer, read_num);
	}
	cl1 = close(from_num);
	cl2 = close(to_num);
	if (cl1 == -1 || cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	free(buffer);
	return (1);
}
