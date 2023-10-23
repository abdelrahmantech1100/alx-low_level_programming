#include "main.h"

/**
	* print_chessboard - main function
	*
	* @a: function parameter declared
	*
	* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 8; c++)
	{
	for (b = 0; b < 8; b++)
	_putchar(c[c][b]);
	_putchar('\n');
	}
}
