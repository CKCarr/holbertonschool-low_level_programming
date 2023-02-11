#include "main.h"
/**
* _strspn - function that gets length of a substring
*
* @s: string to be searched.
* @accept: string of set chars to allow.
* @ nb : number of bytes.
* Return: num of bytes of s which == bytes of set.
*
*/
unsigned int _strspn(char *s, char *accept)
{
	int si, ai, nb;

	for (si = 0; s[si] != '\0' && s[i] != ' '; si++)
		{
			for (ai = 0; accept[ai]; ai++)
			{
				if (s[si] == accept[ai])
				{
					nb++;
					break;
				}
			}
		}
	return (nb);
}