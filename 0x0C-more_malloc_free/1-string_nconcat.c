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
*Return: pointer to new memory allocation
* upon fail retun NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccstr;
	unsigned int str_i, size = n;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (str_i = 0; s1[str_i]; str_i++)
	{
		size++;
	}
	ccstr = malloc(sizeof(char) * (size + 1));
	if (ccstr == NULL)
	{
		return (NULL);
	}

	size = 0;
	for (str_i = 0; s1[str_i]; str_i++)
	{
		ccstr[size++] = s1[str_i];
	}
	for (str_i = 0; s2[str_i] && str_i < n; str_i++)
	{
		ccstr[size++] = s2[str_i];
	}
	ccstr[size] = '\0';
	return (ccstr);
}
