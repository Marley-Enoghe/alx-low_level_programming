#include <stdio.h>

/**
 * main - prints the addition of the Fibonacci numbers
 *
 * Return: returns 0 when the program is executed successfully
 */

int main(void)
{
	int c;
	long int n1, n2, fnum;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fnum = n1 + n2;
		printf(", %ld", fnum);
		n1 = n2;
		n2 = fnum;
	}
	printf("\n");
	return (0);
}
