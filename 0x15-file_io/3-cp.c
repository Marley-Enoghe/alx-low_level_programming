#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - This is a function that call other functions
 * @err_cp_to: This is a function that checks for error copied to
 * @err_cp_from: This is a function that checks for error copied from
 * close_error - This is a function that closes error in file
 * @argc: argument count
 * @argv: argument vector
 * check_error - To checks for error
 * @file_to: file to copy into
 * @file_from: file to copy from
 * Return: return 0
 */
void check_error(int file_to, int file_from, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
}
void close_error(int err_cp_to, int err_cp_from)
{
	if (err_cp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err_cp_to);
		exit(100);
	}
	if (err_cp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err_cp_from);
		exit(100);
	}
}
int main(int argc, char *argv[])
{
	ssize_t read_from, write_to;
	int err_cp_from, err_cp_to, file_from, file_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_to, file_from, argv);
	read_from = 1024;
	while (read_from == 1024)
	{
		read_from = read(file_from, buf, 1024);
		if (read_from == -1)
		{
			check_error(file_to, file_from, argv);
		}
		write_to = write(file_to, buf, read_from);
		if (write_to == -1)
		{
			check_error(file_to, file_from, argv);
		}
	}
	if (file_to == -1)
	{
		check_error(file_to, file_from, argv);
	}
	err_cp_from = close(file_from);
	err_cp_to = close(file_to);
	close_error(err_cp_to, err_cp_from);
	return (0);
}
