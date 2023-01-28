#include "main.h"
/**
* print_alphabet - insomnia alphabet using _putchar accepts char as int
*
* Return: if void compiler defaults the return type int. expects int value
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
		_putchar ('\n');
	

}
