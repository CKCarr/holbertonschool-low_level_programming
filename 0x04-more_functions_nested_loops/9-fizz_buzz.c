#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Fizz Buzz test
*
* Return: void
*/
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
		printf("Buzz");
		putchar('\n');
	return (0);
}
