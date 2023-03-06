#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function that prints strings.
*
* @separator: pointer to string that separates strings.
*
* @n: count of the number of strings passed to function.
*
* Return: void.
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char        *string;
	va_list      args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(args);
}
