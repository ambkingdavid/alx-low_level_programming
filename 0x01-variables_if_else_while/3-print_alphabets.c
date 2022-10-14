#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry out
 *
 * Return: always (0)
 */

int main(void)
{
	int lower, upper;

	lower = 'a';
	upper = 'A';

	while (upper <= 'Z')
	{
		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}

		putchar(upper);
		upper++;
	}
	return (0);
}
