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
	unsigned int stri_1, stri_2, size;
	/*handle null pointers*/
	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	/*get length of each string*/
	for (stri_1 = 0; s1[stri_1]; stri_1++)
		stri_1++;
	for (stri_2 = 0; s2[stri_2]; stri_2++)
		stri_2++;
	/*if n is greater than stri_2 use whole string*/
	if (n >= stri_2)
		n = stri_2;
	/*allocate memory for the concaternated string*/
	ccstr = malloc(sizeof(char) * (stri_1 + n + 1));
	if (ccstr == NULL)
		return (NULL);
	/*copy concat str into ccstr*/
	size = 0;
	for (stri_1 = 0; s1[stri_1]; stri_1++)
		ccstr[size++] = s1[stri_1];
	for (stri_2 = 0; s2[stri_2] && stri_2 < n; stri_2++)
		ccstr[size++] = s2[stri_2];
	/*null terminate the string*/
	ccstr[stri_1 + n] = '\0';
	return (ccstr);
}
