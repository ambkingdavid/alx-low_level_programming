#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry out
 *
 * Return: always (0)
 */

int main(void)
{
	char letters;

	letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}
