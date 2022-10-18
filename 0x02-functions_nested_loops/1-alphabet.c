#include "main.h"

/**
 * prints_alphabet - prints alphabets followed by a new line
 *
 * return: (void)
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
		_putchar(letter);
	_putchar('\n');
}
