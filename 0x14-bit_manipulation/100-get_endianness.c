#include "main.h"

/**
 * get_endianness - checks for the endianness
 *
 * Return: 0 if large endian, 1 if small endian
 */
int get_endianness(void)
{
        int z;
        char *o;

        z = 1;
        o = (char *)&z;
        return (*o);
}
