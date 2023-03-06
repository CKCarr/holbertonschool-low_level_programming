#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - functon that prints anything
*
* @format: list of types of arguments(args)
*
* Return: void
*/
void print_all(const char* const format, ...)
{
	va_list args;
	va_start(args, format);

	int  i;
	double f;
	char c, *s;
	
	while (*format != '\0')
		if (*format == 'c')
			c = (char) va_arg(args, int);
			printf("%c", c);
		else if (*format == 'i')
			i = va_arg(args, int);
			printf("%d", i);
		else if (*format == 'f')
			f = va_arg(args, f);
			printf("%f", double);
		else if (*format == 's')
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
	format++;
	va_end(args);
	printf("\n");
}

