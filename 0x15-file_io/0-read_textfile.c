#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - this is a function that reads a text file and prints it to the POSIX standard output
* @filename: name of the files to read
* @letters: number element in the file
* Return: returns the number of letters in the file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int geen;
	ssize_t read_geen, write_geen;
	char *buffer;

	if (filename == NULL)
		return (0);
	geen = open(filename, O_RDONLY);
	if (geen == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(geen);
		return (0);
	}
	read_geen = read(geen, buffer, letters);
	close(geen);

	if (read_geen == -1)
	{
		free(buffer);
		return (0);
	}

	write_geen = write(STDOUT_FILENO, buffer, read_geen);
	free(buffer);

	if (read_geen != write_geen)
		return (0);

	return (write_geen);
}
