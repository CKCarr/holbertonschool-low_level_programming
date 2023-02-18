#include <stdio.h>
#include "main.h"
/**
* main - program that prints number of args passed to it
*
*@argc: number of args
*@argv: array of args
*
*Return: Always (0) Success
*/
int main(int argc, char *argv[])
{
	(void)argv; /*tells the compiler not to complain when unused*/
	printf("%d\n", argc - 1);

	return (0);
}
