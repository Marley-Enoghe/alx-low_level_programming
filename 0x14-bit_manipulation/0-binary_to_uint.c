#include <stddef.h>
#include "main.h"
/**
* _stoi -this is used for converting a chars to ints
* @c: this is the char to be converted
* Return: this is the converted int
*/
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
* _strlen - this is used to return the length of the string
* @s: help to measures the length
* Return: the length of a string
*/
unsigned int _strlen(const char *s)
{
	unsigned int g;
	for (g = 0; s[g]; g++);
	return (g);
}
/**
* binary_to_uint - this help to convert a string of binary to a decimal number
* @b: the string to be converted
* Return: an unsigned decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int final, temp, initial;
	if (!b)

		return (0);
	final = temp = 0;
	initial = 1;
	for (g = _strlen(b) - 1; b[g]; g--, initial *= 2)
	{
		if (b[g] != '0' && b[g] != '1')
			return (0);
		temp = _stoi(b[g]);
		final += temp * initial;
	}
	return (final);
}
