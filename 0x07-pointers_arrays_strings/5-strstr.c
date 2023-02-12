#include "main.h"
/**
* _strstr - funstion that locates a substing
*
* @haystack: string to search through
*
* @needle: set string for substring to be found
*
* Return: pointer to beginning of substring or null if no substring
*
*/
char *_strstr(char *haystack, char *needle)
{
	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (; *haystack != '\0'; haystack++)
	{
		char *srch = haystack;
		char *find = needle;

		while (*srch == *find && *find != '\0')
		{
			srch++;
			find++;
		}

		if (*srch == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
