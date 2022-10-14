#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry out
 *
 * Return: always (0)
 */


int main(void)
{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'q' || lower == 'e')
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
