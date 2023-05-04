#include "main.h"

/**
* flip_bits -This a function that returns the number of bits you would need to flip.
* @m: 1st element
* @n: second element
* Return: return 1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int doer;

	for (doer = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			doer++;
	}
	return (doer);
}
