#include "main.h"
/**
* jack_bauer - coundown 23:59 00:00
*
*
*
* Return: void
*/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (c = 0; c <= 9; c++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
				}
			}
		}
	}
}
