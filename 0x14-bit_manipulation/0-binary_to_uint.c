#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - checks if string has 0s and 1s only
 * @b: string to be checked
 *
 * Return: 1 if string is valid, else 0
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number as string
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!check_valid_string(b))
		return (0);
	while (b[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}

	return (decimal);
}

