#include "main.h"

/**
* print_chessboard - prints the chessboard.
* @a: chess tab.
*
* Description :  function that prints the chessboard.
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = -1;
	while (*a[++i] && i < 8)
	{
		j = 0;
		while (a[i][j] && j < 8)
			_putchar(a[i][j++]);
		_putchar('\n');
	}
}
