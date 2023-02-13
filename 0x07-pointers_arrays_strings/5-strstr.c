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
	int search, find, found;

	for (search = 0; haystack[search] != '\0'; search++)
	{
		for (find = 0; needle[find] == haystack[search + find]; find++)
		{
			found = (haystack[search] == needle[0]);
			if (haystack[found] == needle[find])
			{
				search++;
				find++;
				return (haystack + found);
			}
			if (needle[find] == '\0')
			{
				return (haystack + search);
			}
		}
	}
		return (0);
}
