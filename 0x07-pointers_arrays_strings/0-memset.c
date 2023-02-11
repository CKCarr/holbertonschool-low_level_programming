#include "main.h"
/**
* _memset - fills in n bytes of b to a pointer
*
* @s: pointer;points to memory area
* @b: constant bytes; to be added
* @n: num of bytes to be added
*
* Return: returns pointer to memory area string; (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
