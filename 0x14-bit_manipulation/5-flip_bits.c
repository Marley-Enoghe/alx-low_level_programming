#include "main.h"

/**
 * flip_bits -This is a function that returns the number of bits you would need to flip.
 * @m: first element
 * @n: second element
 * Return: return 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int doe;

	for (doe = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			doe++;
	}
	return (doe);
}
