#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: on success 1
 * On error, -1 and set errno well
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
