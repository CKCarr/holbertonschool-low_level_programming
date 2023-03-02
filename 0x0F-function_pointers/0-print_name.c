#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
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
	f(name);
}
