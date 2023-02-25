#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to standard output
 * @c: the character to print
 *
 * Return: 1 on successful program completion
 * on error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));

}
