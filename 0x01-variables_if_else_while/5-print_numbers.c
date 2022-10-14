#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry out
 *
 * Return: always (0)
 */

int main(void)
{
	int numbers;

	numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
