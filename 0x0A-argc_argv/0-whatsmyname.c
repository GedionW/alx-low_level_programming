#include <stdio.h>

/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0 success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
