#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer tonewly allocate space
 *which contains a copy of the string given as a parameter
 *@str:string to be copied
 *
 *Return:NULL if str
 *Null if memory is unsufficient
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
