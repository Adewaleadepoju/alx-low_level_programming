#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if endian big, 1 if endian little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
