#include "main.h"
/**
* *_strcpy -function copies the string src to dest
*
* @dest: string destination
*
* @src: string source
*
* Return: value is the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int chr;

	for (chr = 0; src[chr] != '\0'; chr++)
	{
		(dest[chr] = src[chr]);
	}
	{
		(dest[chr++] = '\0');
	}
	return (dest);
}
