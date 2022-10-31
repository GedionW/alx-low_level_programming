#include "main.h"

/**
 * get_endianness - checks whether machine is endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
