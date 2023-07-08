#include "main.h"

/**
 * set_bit - used for settiing the value of a bit to 1 at a given index.
 * @n: the number to set
 * @index: index at which to set
 *
 * Return: this will return 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int set_er;

        if (index > (sizeof(unsigned long int) * 8 - 1))
                return (-1);
        set_er = 1 << index;
        *n = *n | set_er;
        return (1);
}
