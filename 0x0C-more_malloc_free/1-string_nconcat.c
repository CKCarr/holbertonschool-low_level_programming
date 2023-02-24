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
	unsigned int s1i = 0, s2i = 0, i1, i2;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[s1i] != '\0')
		s1i++;
	while (s2[s2i] != '\0')
		s2i++;
	if (n >= s2i)
		n = s2i;
	ccstr = malloc(sizeof(char) * (s1i + n + 1));
	if (ccstr == NULL)
		return (NULL);
	for (i1 = 0; s1[i1] != '\0'; i1++)
		ccstr[i1] = s1[i1];
	for (i2 = s1i; i2 < s1i + n; i2++)
		ccstr[i2] = s2[i2 - s1i];
	ccstr[i2] = '\0';
	return (ccstr);
}
