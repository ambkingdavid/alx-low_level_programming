#include <stdio.h>


void __attribute__((constructor)) hare(void);

/**
 * name - prints some strings.
 *
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
