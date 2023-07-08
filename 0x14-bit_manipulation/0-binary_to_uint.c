#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containin the binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
        int u;
        unsigned int num_b;

        num_b = 0;
        if (!b)
                return (0);
        for (u = 0; b[u] != '\0'; u++)
        {
                if (b[u] != '0' && b[u] != '1')
                        return (0);
        }
        for (u = 0; b[u] != '\0'; u++)
        {
                num_b <<= 1;
                if (b[u] == '1')
                        num_b += 1;
        }
       return (num_b);
}
