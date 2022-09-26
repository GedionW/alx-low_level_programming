#include "main.h"

/**
 * _memset - fills memory block with constant byte
 * @s: address to memory block
 * @b: char to use
 * @n: number of bytes to use
 *
 * Return: pointer to memomry block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
