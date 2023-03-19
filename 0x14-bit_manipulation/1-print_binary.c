#include "main.h"
/**
  * print_binary - function that prints the binary
  * representation of a number.
  * @n: is an unsigned long int #
  *
  * Return: the converted number for SUCCESS
  * return 0 if chars in the string b that is not 0
  * return 0 if b is NULL.
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((mask & n) != 0)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
