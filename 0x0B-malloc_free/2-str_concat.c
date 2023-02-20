#include "main.h"
/**
* str_concat - string that concaternates 2 strings.
*
* @s1: string given
* @s2: string given
*
* Return: pointer to allocated space in memory
* contains s1 followed by s2 and null terminated
* if Null is passed treat as empty string
* return NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s_index, ccs_index = 0, size = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		for (s_index = 0; s1[s_index] || s2[s_index]; s_index++)
		{
			size++;
		}
	concat_str = malloc(sizeof(char) * size);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (s_index = 0; s1[s_index]; s_index++)
	{
		concat_str[ccs_index++] = s1[s_index];
	}
	for (s_index = 0; s2[s_index]; s_index++)
	{
		concat_str[ccs_index++] = s2[s_index];
	}
	return (concat_str);
}
