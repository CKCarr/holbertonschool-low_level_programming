#include "holberton.h"
/**
* leet - function that encodes a string
*
* @str: string to be encoded.
*
* Return: string encoded and replaced
*
*/
char *leet(char *str)
{
	int i, c;
	int find[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rplc[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (c = 0; str[c]; c++)
	{
		for (i = 0; find[i]; i++)
		{
			if (str[c] == find[i])
			{
				str[c] = rplc[i];
			}
		}
	}
		return (str);
}
