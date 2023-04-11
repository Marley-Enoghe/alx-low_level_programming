#include "main.h"

/**
 * get_bit - this is a function that returns the value of a bit in an index in a decimal number
 * @n: the number to be determined
 * index: element of the variable
 *Return: 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int bi;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bi = n >> index;

	bi &= 1;
	return (bi);
}
