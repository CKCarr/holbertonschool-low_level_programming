#include "main.h"
/**
* times_table - prints 9 times table, starting with 0
*
* Return: void, (0)Always is success
*/
void times_table(void)
{
	int n, m, e;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			e = (n * m);

			if (e <= 9)
				_putchar(' ');
			else
				_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
		}
		_putchar('\n');
	}
}
