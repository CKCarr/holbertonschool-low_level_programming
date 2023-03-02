#include "function_pointers.h"
#include <stdlib.h>
/**
  * print_name - function that prints a name
  *
  * @name: char string of a name
  * @f: pointer to function that prints name
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	int index;

	for (index = 0; name[index] != '\0'; index++)
	{
		(*f)(&name[index]);
	}
	(*f)("\n");
}
