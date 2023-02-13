#include "main.h"
/**
* print_chessboard -function that prints the chess board
*
* @a: string that has 8 colums 8 rows
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int row, colmn;

	for (row = 0; row < 8; row++)
	{
		for (colmn = 0; colmn < 8; colmn++)
		{
			_putchar(a[row][colmn]);
		}
			_putchar('\n');
	}
}
