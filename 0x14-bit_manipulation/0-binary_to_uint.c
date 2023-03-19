#include "main.h"
/**
  * binary_to_uint - function that converts
  *                  a binary number to an unsigned int.
  * @b: is pointing to a string of 0 and 1 chars.
  *
  * Return: the converted number for SUCCESS
  * return 0 if chars in the string b that is not 0
  * return 0 if b is NULL.
  */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		result <<= 1;
		if (b[index] == '1')
		{
			result += 1;
		}
	}
	return (result);
}
