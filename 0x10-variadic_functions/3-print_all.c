#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - functon that prints anything
* @format: list of types of arguments(args)
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arglist;
	int f_len = 0, f_index = 0, i;
	char c, *string, *sep = ", ";
	float f;

	va_start(arglist, format);

	while (format && format[f_len])
		f_len++;
	while (format && format[f_index])
	{
		if (f_index == (f_len - 1))
		{
			sep = "";
		}
		switch (format[f_index])
		{
			case 'c':
				c = (char) va_arg(arglist, int);
				printf("%c%s", c, sep);
				break;
			case 'i':
				i = va_arg(arglist, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(arglist, double);
				printf("%f%s", f, sep);
				break;
			case 's':
				string = va_arg(arglist, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", string, sep);
				break;
		}
		f_index++;
	}
	va_end(arglist);
	printf("\n");
}
