#include"main.h"

/**
 * get_bit - return the value of bit at given indexes.
 * @n: number to check bit on
 * @index: index at which bit is checked
 *
 * Return: value of the bit, -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
        unsigned long int divisor_, check_er;

        if (index > (sizeof(unsigned long int) * 8 - 1))
                return (-1);
        divisor_ = 1 << index;
        check_er = n & divisor_;
        if (check_er == divisor_)
                return (1);
        return (0);
}
