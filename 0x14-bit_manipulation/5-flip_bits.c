#include "main.h"
/**
  * flip_bits - function that returns number of bits
  * you would need to flip to get from one number to another.
  * @n: is an unsigned long int #
  * @m: other unsigned int
  * Return: int result will be value of bit at index for SUCCESS
  *         return (-1) upon error
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_result = n ^ m;
	unsigned int i, count = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (XOR_result >> i & 1)
		{
			count++;
		}
	}
	return (count);
}
