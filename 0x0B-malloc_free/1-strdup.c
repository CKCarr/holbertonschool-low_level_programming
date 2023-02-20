#include "main.h"
/**
* _strdup - duplicates parameter string & return pointer
* to newly allocated space in memory.
*
* @str: string given
*
* Return: pointer to duplicate string, or NULL if
* insufficient memory
*/
char *_strdup(char *str)
{
	char *dupstr;
	int index, len = 0;

	for (index = 0; str[index]; index++)
	{
		len++;
	}
	dupstr = malloc(sizeof(char) * (index + 1));
	if (str == NULL || dupstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index[str]; index++)
	{
		dupstr[index] = str[index];
	}
	dupstr[len] = '\0';
	return (dupstr);
}
