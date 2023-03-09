#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be calculated
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int givelong = 0;

	if (*s)
	{
		givelong++;
		givelong += _strlen_recursion(s + 1);
	}
	return (givelong);
}
