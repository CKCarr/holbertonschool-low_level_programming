#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - function that concaternates two strings
*
* @s1: char string one
* @s2: char string two be added on to 1st.
* @n: size of memory to be allocated.
*
* Return: pointer to new memory allocation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccstr;
	unsigned int s1_i = 0, s2_i = 0;
	unsigned int s1_l = 0, s2_l = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
	{
		for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		{
			if (n >= s2_l)
			{
				s2_l++;
			}
		}
	}

	ccstr = malloc(sizeof(char) * (s1_l + s2_l + 1));

	if (ccstr == NULL)
		return (NULL);

	for (s1_i = 0; s1_i < s1_l; s1_i++)
		ccstr[s1_i] = s1[s1_i];
	for (s2_i = 0; s2_i < s2_l; s2_i++)
		ccstr[s1_i + s2_i] = s2[s2_i];

	ccstr[s1_i + s2_i] = '\0';

	return (ccstr);
}
