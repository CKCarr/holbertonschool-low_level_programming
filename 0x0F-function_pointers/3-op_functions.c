#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - function adds two integers
  *
  * @a: integer num1
  * @b: integer num2
  *
  * Return: result of calculation
  */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
  * op_sub - function that subtracts two integers
  * @a: integer num1
  * @b: integer num2
  * Return: result
  */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
  * op_mul - function that multiplies two integers
  * @a: integer num1
  * @b: integer num2
  * Return: result
  */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
  * op_div - functon that divides two intergers.
  * @a: integer num1
  * @b: interger num2
  * Return: result
  */
int op_div(int a, int b)
{
	return ((a) / (b));
}
/**
  * op_mod - functon that gets modulo of two integers.
  * @a: integer num1
  * @b: integer num2
  * Return: result
  */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
