#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
* append_text_to_file -This is A function that appends text to a file
* @text_content: added elements in the file
* @filename: filename.
*
* Return: return 1 if the file exists, or -1 if the file does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int now_filee, je, now_namee;

	if (!filename)
	{
		return (-1);
	}

	now_filee = open(filename, O_WRONLY | O_APPEND);
	if (now_filee == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (je = 0; text_content[je]; je++)

			;
		now_namee = write(now_filee, text_content, je);
		if (now_namee == -1)
		{
			return (-1);
		}
	}
	close(now_filee);
	return (1);
}
