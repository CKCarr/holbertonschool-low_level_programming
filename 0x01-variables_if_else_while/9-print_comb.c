#include <stdio.h>
/**
* main -Patience, persistance and perspiration equal success
*
*Return: 0 Always
*/
int main(void)
{
	int x = 0;

for (x = 0; x < 10; x++)
{
	putchar(x + '0');

		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
}
putchar('\n');
return (0);
}
