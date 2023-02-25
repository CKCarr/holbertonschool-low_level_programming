#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - function that concaternates two strings
*
* @s1: char string one
* @s2: char string two be added on to 1st.
* @n: char bytes of s2.
*
* Return: pointer to new memory allocation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccstr;
	unsigned int s1_l = 0, s2_l = 0;
	unsigned int index = 0, length = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[s1_l])
		s1_l++;
	while (s2[s2_l])
		s2_l++;
	if (n >= s2_l)
		length = s1_l + s2_l;
	else
		length = s1_l + n;

	ccstr = malloc(sizeof(char) * length + 1);
	if (ccstr == NULL)
		return (NULL);
	s2_l = 0;
	while (index < length)
	{
		if (index <= s1_l)
			ccstr[index] = s1[index];
		if (index >= s1_l)
		{
			ccstr[index] = s2[s2_l];
			s2_l++;
		}
		index++;
	}
	ccstr[index] = '\0';
	return (ccstr);
}
