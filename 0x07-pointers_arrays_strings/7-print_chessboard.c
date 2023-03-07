#include "main.h"

/**
 * print_chessboard - prints a chess board.
 * @a: the board to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	/* loop through the rows */
	while (i < 8)
	{
		/* loop through the columns */
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
