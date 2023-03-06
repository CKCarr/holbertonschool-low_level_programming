#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * get_op_func - function that selects the correct
  * function to perforn the operations
  * @s: operator passed as argument to the program.
  *
  * Return: pointer to the funstion that corresponds
  * to the operator given as a parameter
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
