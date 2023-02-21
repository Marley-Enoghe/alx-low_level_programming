#include "main.h"
/**
 * print_alphabet - a function that prints alphabet in lowercase
 *
 *Return: returns 0 when the program is executed successfully
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

}
