#include <unistd.h>
	
/**
* _putchar - writes the character c to the stdout
* @c: The printed character
*
* Return: returns 1 when successful.
* on error, -1 is to be returned, and set errno appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
