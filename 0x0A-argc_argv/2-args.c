#include <stdio.h>
#include "main.h"
/**
* main - program that prints all arguments it recieves.
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always (0) Success
*/
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
