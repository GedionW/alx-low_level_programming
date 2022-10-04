#include "main.h"

/**
 * _strdup - return pointer tonewly allocate space
 * which contains a copy of the string given as a parameter
 * @str:string to be copied
 *
 * Return: NULL in case of erro, pointer to allocated 
 */

char *_strdup(char *s1, char *s2)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
