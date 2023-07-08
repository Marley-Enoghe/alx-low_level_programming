#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value 0 to a bit  at a given index
 * @n: parameters
 * @index: indexes
 * Return: 1 when working, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > sizeof(n) * 8)
                return (-1);
        *n &= ~(1 << index);
        return (1);
}
