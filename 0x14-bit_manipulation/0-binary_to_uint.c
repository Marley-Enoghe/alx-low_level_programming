#include "main.h"
#include <stddef.h>
/*
* _stoi - is used for converting a char to int
* @m: the chars that will be converted
* Return: the converted ints
*/
unsigned int _stoi(char m)
{
	return ((unsigned int) m - '0');
}
/**
* _strgleng - this to return the length of the string
* @s: help to measures the length
* Return: the length of a string
*/
unsigned int _strgleng(const char *s)
{
	unsigned int u;

	for (u = 0; s[u]; u++)
		;
	return (u);
}
/**
* binary_to_uint - this help to convert a string of binary to a decimal number
* @r: the string to be converted
* Return: an unsigned decimal number
*/
unsigned int binary_to_uint(const char *r)
{
	int g;
	unsigned int final, temp, initial;

	if (!r)
		return (0);
	final = temp = 0;
	initial = 1;
	for (g = _strgleng(r) - 1; r[g]; g--, initial *= 2)
	{
		if (r[g] != '0' && r[g] != '1')
			return (0);
		temp = _stoi(r[g]);
		final += temp * initial;
	}
	return (final);
}
