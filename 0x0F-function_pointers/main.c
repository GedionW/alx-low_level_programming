#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perfroms operations
 * @argc: number pf arguments passed
 * @argv: array of pointers to arguments
 * Retur: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
