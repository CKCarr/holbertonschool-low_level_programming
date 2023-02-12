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
	int search = 0, i;

	while (s[search])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[search] == accept[i])
			{
				return (s + i - 1);
			}
		}
		search++;
	}
	return ('\0');
}
