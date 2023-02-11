#include "main.h"
/**
*
* -strspn - function 
*
*
*
*
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
