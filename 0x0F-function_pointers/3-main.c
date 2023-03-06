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
	char *op_str;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_str = argv[2];

	if (*op_str != '+' && *op_str != '-' && *op_str != 42 && *op_str != '/' && *op_str != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (((*op_str == '/') || (*op_str == '%')) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	op_func_ptr = get_op_func(op_str);
	result = op_func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
