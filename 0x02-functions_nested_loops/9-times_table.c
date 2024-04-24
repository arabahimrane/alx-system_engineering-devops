#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int row;
	int col;
	int tmp;

	row = -1;
	while (++row <= 9)
	{
		col = -1;
		tmp = 0;
		while (++col <= 9)
		{
			if (tmp >= 10)
				_putchar((tmp / 10) + '0');
			else if (col > 0)
				_putchar(' ');
			_putchar((tmp % 10) + 48);
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			tmp += row;
		}
		_putchar('\n');
	}
}
