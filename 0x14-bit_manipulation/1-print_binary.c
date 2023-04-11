#include "main.h"

/**
 * print_binary - a function that prints the binary reprentation of an integer
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	int m, numb = 0;
	unsigned long int now;

	for (m = 50; m >= 0; m--)
	{
		now = n  >> m;

		if (now & 1)
		{
			_putchar('1');
			numb++;
		}
		else if (numb)
			_putchar('0');
	}
	if (!numb)
		_putchar('0');
}
