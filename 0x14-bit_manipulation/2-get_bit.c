#include "main.h"
/**
* get_bit - This is a function that returns value of bit in an index in a decimal number.
* @n: This is the number to be determined.
* index: An element of the variable
*Return: 1 .
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}
	bit = n >> index;
	bit &= 1;
	return (bit);
}
