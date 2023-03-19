#include "main.h"
/**
  * clear_bit - function that returns the value of a bit at a given index.
  * @n: is an unsigned long int #
  * @index: index starting at 0, of the bit you want to get,
  * Return: int result will be value of bit at index for SUCCESS
  *         return (-1) upon error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}