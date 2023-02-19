#include <stdio.h>
/**
 * main - starting point for program execution
 * Return: returns 0 when the program is executed successfully
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);

}
