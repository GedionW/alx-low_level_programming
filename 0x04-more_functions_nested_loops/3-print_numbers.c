#include <stdio.h>
#include 'main.h"

/**
*prints_numbers - functions that print all numbers from
*0 to 9
*
*Return: returns nothing
*/

void print_number(void)
{
	int n;

	for (n = 48; n < 58;n++)
	{
		putchar(n);
	}
	putchar(10);
}
