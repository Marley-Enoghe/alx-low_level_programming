#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - This is a function that create file
 * @text_content: element of the files
 * @filename: name of the file created
 *
 * Return: return 1
 */
int create_file(const char *filename, char *text_content)
{
	int g = 0, new_file;
	int o_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[g] != '\0')
	{
		g++;
	}

	new_file = write(o_file, text_content, g);

	if (new_file == -1)
		return (-1);

	close(o_file);
	return (1);
}

