#include "main.h"

/**
 * get_endianness - checks for the endianness
 *
 * Return: 0 if large endian, 1 if small endian
 */
int get_endianness(void)
{
        int z;
        char *y;

        z = 1;
        y = (char *)&z;
        return (*y);
}
