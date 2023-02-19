#include <stdio.h>
#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
/**
* main - program that multiplies two numbers
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always (0) Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
