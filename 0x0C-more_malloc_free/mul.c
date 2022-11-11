#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

/**
  * main - multiply 2 positive integers
  *
  */

int check_str(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (!(s[0] >= '0' && s[0] <= '9'))
	{
		return (1);
	}
	
	return (0);
}

int main(int argc, char **argv)
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || check_str(num1) == 1 || check_str(num2) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[1] == '0' || *argv[2] == '0')
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}


	return (0);
}
