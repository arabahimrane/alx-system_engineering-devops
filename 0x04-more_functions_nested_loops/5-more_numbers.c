#include <unistd.h>
#include "main.h"

/**
* more_numbers - Print nbrs.
* Description : function that prints the numbers
*/
void more_numbers(void)
{
	int i;

	i = -1;
	while (++i < 10)
		write(1, "01234567891011121314\n", 21);
}
