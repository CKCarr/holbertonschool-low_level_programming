#include "main.h"
/**
* _strstr - funstion that locates a substing
*
* @haystack: string to search through
*
* @needle: set string for substring to be found
*
* Return: pointer to beginning of substring or null if no
*/
char *_strstr(char *haystack, char *needle)
{
	int search, find = 0;

	for (search = 0; haystack[search] != '\0'; search++)
	{
		while ( needle[find] != '\0' && needle[find] == haystack[search])
		{
		if (haystack[search] == needle[0])
		{
			search++;
			find++;
			return (haystack + search);
		}
		if (needle[find] == '\0')
		{
			return (haystack + search);
		}
		find++;
		}
	}
		return ('\0');
}
