#include "main.h"

/**
* get_endianness - This is function that checks if a machine is little or large endian.
*
* Return: 0 for large or 1 for little
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *d = (char *) &n;
	int endianness;

	if (*d)
		endianness = 1;
	else
		endianness = 0;

	return (endianness);
}
