#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - A function that  appends text to a file
 * @filename: filename.
 * @text_content: added elements in the file
 *
 * Return: return 1 if the file exists, or  -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int now_file, j, now_name;

	if (!filename)
	{
		return (-1);
	}

	now_file = open(filename, O_WRONLY | O_APPEND);
	if (now_file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (j = 0; text_content[j]; j++)

			;
		now_name = write(now_file, text_content, j);
		if (now_name == -1)
		{
			return (-1);
		}
	}

	close(now_file);
	return (1);
}
