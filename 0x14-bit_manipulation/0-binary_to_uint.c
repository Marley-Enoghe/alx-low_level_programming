#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - this converts binary number to unsigned int
 * @b: binary number
 * Return: the converted number which is the unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int marv;
	int g;

	if (b == NULL)
		return (0);

	for (g =
