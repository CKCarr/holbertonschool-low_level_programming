#include <stdio.h>
/**
*main -entry
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char ch;
	char e;
	char q;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar (ch);
		}
		else
		{
		continue;
		}
	}
	putchar ('\n');
	return (0);
}
