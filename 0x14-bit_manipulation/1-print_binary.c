#include "main.h"

/**
 * _pow - calculates (base to  power)
 * @base: base of exponent
 * @power: power of exponent
 *
 * Return: value of (base to power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
        unsigned long int numb;
        unsigned int a;

        numb = 1;
        for (a = 1; a <= power; a++)
                numb *= base;
        return (numb);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
        unsigned long int divisor, check_er;
        char flags;

        flags = 0;
        divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
        while (divisor != 0)
        {
                check_er = n & divisor;
                if (check_er == divisor)
                {
                        flags = 1;
                        _putchar('1');
                }
                else if (flags == 1 || divisor == 1)
                {
                        _putchar('0');
                }
                divisor >>= 1;
        }
}
