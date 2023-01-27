#include <stdio.h>
/**
* main - print base 16 numbers in lowercase
*
* Return: 0 Always
*/
int main(void)
{
	int hn;
	char hl;

	for (hn = '0'; hn <= '9'; hn++)
		putchar(hn);

	for (hl = 'a'; hl <= 'f'; hl++)
	putchar(hl);

	putchar('\n');
	return (0);
}
