#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, c = 'a'; j < 26; j++, c++)
			_putchar(c);
		_putchar('\n');
	}
}
