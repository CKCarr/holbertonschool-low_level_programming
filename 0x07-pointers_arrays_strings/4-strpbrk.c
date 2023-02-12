#include "main.h"
/**
* _strpbrk - function that searches string for set of bytes
*
* @s: string to be searched.
* @accept: string of set chars to compare
*
* Return: pointer to 1st byte that matches
*
*/
char *_strpbrk(char *s, char *accept)
{
	int search = 0;

	while (s[search])
	{
		for (search = 0; accept[search]; search++)
		{
			if (s[search] == accept[search])
			{
				return (s + search - 1);
			}
		}
		search++;
	}
	return ('\0');
}
