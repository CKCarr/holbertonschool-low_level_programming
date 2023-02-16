#include "main.h"
/**
* _strchr - function that locates a char in string
*
* @s: string to be searched
* @c: char in string to be found.
*
* Return: pointer to first occurence of c in s or null if not found.
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
