#include <stdio.h>

/**
 *
 *  * maina - prints the alphavetic in lower and uper case
 *
 * Return: Always (Success)
 *
 *  */

int main(void)

{ 
	char c;
	   for (c= 'a'; c <='z'; c++)
	   {
		   putchar(c);
	   }
	   for (c ='A'; c <= 'Z'; c++)
                      {
			      putchar(c);
		      }
	   putchar('\n');

	   return (0);
}

