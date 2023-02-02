#include "main.h"
/**
* more_numbers - function prints 0-14 10x's
*
* Return: void
*/
void more_numbers(void)
{
	int i = 0, x;

	while (i < 10)
	{
		x = 0;
		while (x < 14)
		{
			if (x >= 10)
			{
			_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
			x++;
		}
		_putchar('\n');
		i++;
	}
}
