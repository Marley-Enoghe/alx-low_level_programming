#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - This is can be a function that create file
* @text_content: An element of the files
* @filename: The name of the file created
*
* Return: return 1
*/
int create_file(const char *filename, char *text_content)
{
	int gee = 0, new_filee;
	int o_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[gee] != '\0')
	{
		gee++;
	}

	new_filee = write(o_file, text_content, gee);

	if (new_filee == -1)
		return (-1);

	close(o_file);
	return (1);
}
