#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print bit size of data types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of char: %d\n", sizeof(char));
	printf("size of int: %d\n", sizeof(int));
	printf("size of long int: %d\n", sizeof(long int));
	printf("size of long long int: %d\n", sizeof(long long int));
	printf("size of float: %d\n", sizeof(float));

	return (0);
}
