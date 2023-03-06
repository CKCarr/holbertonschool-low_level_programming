#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - program that performs simple operations.
  *
  * @argc: calc num1 operator num2
  * @argv: arg vector - value of each arg index.
  *
  * Return: int 0 (Success) cases if failed
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*op_func_ptr)(int, int);
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];

	op_func_ptr = get_op_func(ops);
	if (*ops != 43 && *ops != 45 && *ops != 42 && *ops != 47 && *ops != 37)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*ops == '/') || (*ops == '%')) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
