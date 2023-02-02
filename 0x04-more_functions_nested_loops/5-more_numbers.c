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
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
			_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
