#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program that adds positive numbers.
*
* @argc: count of arguments
* @argv: array of arguments
*
* Return: return 1 if !digit or 0num passed 0 for success
*/
int main(int argc, char *argv[])
{
	int index, digit, result = 0;

	for (index = 1; index < argc; index++)
	{
		for (digit = 0; argv[index][digit]; digit++)
		{
			if (argv[index][digit] < '0' || argv[index][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[index]);
	}
	printf("%d\n", result);
	return (0);
}
