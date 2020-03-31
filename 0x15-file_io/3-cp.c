#include "holberton.h"

int copy_file(int from_num, int to_num, char *from, char *to);
/**
* main - copies one file to another
* Return: an integer depending on if the function succeeded
* @argc: number of args
* @argv: the list of args
*/
int main(int argc, char *argv[])
{
	int from_num, to_num, cl1, cl2, copied;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_num = open(argv[1], O_RDONLY);
	if (from_num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_num = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to_num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copied = copy_file(from_num, to_num, argv[1], argv[2]);
	if (copied != 1)
		exit(copied);
	cl1 = close(from_num);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from_num);
		exit(100);
	}
	cl2 = close(to_num);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to_num);
		exit(100);
	}
	return (0);
}
/**
* copy_file - if files exist, copies it
* Return:1 for success, or error code
* @from_num: filenumber fd to copy from
* @to_num: file number to copy to
* @from: the name of the source file
* @to: name of the dest file
*/
int copy_file(int from_num, int to_num, char *from, char *to)
{
	char buffer[1024];
	int writ_num, read_num;

	for (writ_num = 1024; writ_num == 1024;)
	{
		read_num = read(from_num, buffer, 1024);
		if (read_num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			return (98);
		}
		writ_num = write(to_num, buffer, read_num);
		if (writ_num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			return (99);
		}
	}
	return (1);
}
