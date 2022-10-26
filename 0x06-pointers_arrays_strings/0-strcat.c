#include "main.h"

/**
  * _strcat - concatinate two strings
  *
  * @dest: a pointer to the string operand
  * @src: a pointer to the string to concat with the operand.
  *
  * Return: A pointer to the destination string @dest.
  */

char *_strcat(char *dest, char *src)
{
	int destIndex = 0, srcIndex = 0;

	while (dest[destIndex])
	{
		srcIndex++;
	}
	for (destIndex = 0; src[destIndex]; destIndex++)
	{
		dest[srcIndex++] = src[destIndex];
	}

	return (dest);
}
