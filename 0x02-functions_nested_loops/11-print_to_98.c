#include <stdio.h>
#include "main.h"
/**
*print_to_98 - print ALL natural numbers from to 98
* seperate # by comma and space
*print numbers in order
*printed # is # passed to function
*last printed # is 98
*allowed to use standard library
*@n: number to be checked
*Return: 0 Always for Success
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
