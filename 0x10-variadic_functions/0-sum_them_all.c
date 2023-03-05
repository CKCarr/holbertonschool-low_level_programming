#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - return the sum of all parameters.
*
* @n: variadic ints in list.
*
* Return: int - sum of all variadic list inputs
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
