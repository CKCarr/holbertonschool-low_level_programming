#include "3-calc.h"
/**
  * get_ops_func - function that selects the correct
  * function to perforn the operations 
  * @s: operator passed as argument to the program.
  * 
  * Return: pointer to the funstion that corresponts to
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
	int i;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
