#include <stdio.h>

/**
 * hare - fast and.
 *
 * Description:function arrive first before main.
 */
void hare(void) __attribute__((constructor));

void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
