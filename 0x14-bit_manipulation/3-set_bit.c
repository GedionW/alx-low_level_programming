#include "main.h"

/**
 * set_bit - sets value of bit to 1 at the given index
 * @n: number to set
 * @index: index to set bit
 *
 * Return: 1 if it works or -1 if ther an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
