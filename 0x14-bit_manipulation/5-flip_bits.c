#include "main.h"

/**
 * flip_bits - for counting the number of bits to change
 * to get from one number to another
 * @n: first number_
 * @m: second number_
 *
 * Return: number of the bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        int j, count = 0;
        unsigned long int current;
        unsigned long int exclusive = n ^ m;

        for (j = 63; j >= 0; j--)
        {
                current = exclusive >> j;
                if (current & 1)
                        count++;
        }

        return (count);
}
