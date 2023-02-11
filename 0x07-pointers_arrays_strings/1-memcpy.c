#include "main.h"
/**
* _memcpy - copy memory area.
*
* @src: pointer to memory area source
* @dest: pointer to memory area destination
* @n: number of bytes of mem area to be set to dest.
*
* Return: pointer to destinaton
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
