#include "main.h"

/**
	* print_chessboard - main function
	*
	* @a: function parameter declared
	*
	* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	int c;
	int v;

	for (c = 0; c < 8; c++)
	{
	for (v = 0; v < 8; v++)
	_putchar(a[c][v]);
	_putchar('\n');
		}
		}
