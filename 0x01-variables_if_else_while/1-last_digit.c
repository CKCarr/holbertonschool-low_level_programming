#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - print the last digit of the number stored
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int l;
	char str1[] = "Last digit of";
	char str2[] = "and is greater than 5";
	char str3[] = "and is 0";
	char str4[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (l > 5)
	{
		printf("%s %d is %d %s\n", str1, n, l, str2);
	}
	else if (l == 0)
	{
		printf("%s %d is %d %s\n", str1, n, l, str3);
	}
	else if (l < 6)
	{
		printf("%s %d is %d %s\n", str1, n, l, str4);
	}

	return (0);
}
