#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
* create_file - A function that create file
* @filename: name of the file created
* @text_content: element of the files
*
* Return: return 1
*/
int create_file(const char *filename, char *text_content)
{
	int ge = 0, new_filee;
	int o_filee = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o_filee == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[ge] != '\0')
	{
		ge++;
	}

	new_filee = write(o_filee, text_content, ge);

	if (new_filee == -1)
		return (-1);

	close(o_filee);
	return (1);
}
