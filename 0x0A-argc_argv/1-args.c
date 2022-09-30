#include <stdio.h>

/**
 * main - function to print number of arguments passed by
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
