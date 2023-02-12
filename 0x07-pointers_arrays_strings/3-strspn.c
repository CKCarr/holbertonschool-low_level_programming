#include "main.h"
/**
* _strspn - function that gets length of a substring
*
* @s: string to be searched.
* @accept: string of set chars to allow.
* @ bytes = number of bytes
* Return: num of bytes of s which == bytes of set.
*
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int si, ai;

	for (si = 0; s[si]; si++)
	{
		for (ai = 0; accept[ai]; ai++)
		{
			if (s[si] == accept[ai])
			{
				bytes++;
				break;
			}
			else if (accept[ai] == '\0')
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
