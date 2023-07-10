#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* append_text_to_file - This a function that appends text to a file
* @filename: The filename to be worked on.
* @text_content: The added elements in the file
*
* Return: To return 1 if the file exists, or -1 if the file does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int nw_file, jee, nw_name;

	if (!filename)
	{
		return (-1);
	}

	nw_file = open(filename, O_WRONLY | O_APPEND);
	if (nw_file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (jee = 0; text_content[jee]; jee++)

			;
		nw_name = write(nw_file, text_content, jee);
		if (nw_name == -1)
		{
			return (-1);
		}
	}

	close(nw_file);
	return (1);
}
