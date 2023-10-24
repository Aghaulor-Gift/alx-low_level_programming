#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; ++row)
	{
	for (col = 0; col < 8; ++col)
	{
	printf("%c ", a[row][col]);
	}
	printf("\n");
	}
	return (void);
}
