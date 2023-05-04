#include "main.h"
/**
* set_bit - This is a function that set the value of a bit to 1 .
* @n: the number of an elements
* @index:the start of bit
* Return: return 1
*/
int set_bit(unsigned long int *n, unsigned int index)
	{
		if (index >= sizeof(unsigned long int) * 8)
		{
		return (-1);
		}
		*n |= 1 << index;
		return (1);
	}
