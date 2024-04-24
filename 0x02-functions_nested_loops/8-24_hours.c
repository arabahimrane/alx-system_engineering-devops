#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int min;
	int sec;

	min = -1;
	while (++min < 24)
	{
		sec = -1;
		while (++sec < 60)
		{
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar(':');
			_putchar(sec / 10 + '0');
			_putchar(sec % 10 + '0');
			_putchar('\n');
		}
	}
}
