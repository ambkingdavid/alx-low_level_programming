#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry out
 *
 * Return: always (0)
 */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

