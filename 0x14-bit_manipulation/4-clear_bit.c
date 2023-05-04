#include "main.h"
/**
* clear_bit -This is a sets of the value of a given bit to 0
* @n:this is a pointer to the number to change
* @index: index of the bit to clear
*
* Return: return 1 for success,or -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int joey = 1;
	if (index > 63)
		return (-1);
	joey <<= index;
	joey = ~joey;
	*n &= joey;
	return (1);
}
