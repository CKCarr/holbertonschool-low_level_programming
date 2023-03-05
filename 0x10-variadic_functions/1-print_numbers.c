#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - function that prints numbers.
*
* @separator: pointer to string in main ", " to be printed
* between numbers.
*
* @n: the count of int args passed from main to function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	int          index_value = 0;
	va_list      args;

	va_start(args, n);
	for (index = 0; index < n; index++)
	{
		index_value = va_arg(args, unsigned int);
		printf("%d", index_value);

		if (index < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
