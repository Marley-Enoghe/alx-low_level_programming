#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - this is a function that reads a text file and prints it to the POSIX standard output
 * @letters: number  element in the file
 * @filename: name of the files to read
 * Return: returns the number of letters in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int gen;
	ssize_t read_gen, write_gen;
	char *buffer;

	if (filename == NULL)
		return (0);

	gen = open(filename, O_RDONLY);
	if (gen == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(gen);
		return (0);
	}

	read_gen = read(gen, buffer, letters);
	close(gen);

	if (read_gen == -1)
	{
		free(buffer);
		return (0);
	}

	write_gen = write(STDOUT_FILENO, buffer, read_gen);
	free(buffer);

	if (read_gen != write_gen)
		return (0);

	return (write_gen);
}
