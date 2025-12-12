#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');  /* Onluq hissə */
			c = j % 10 + '0';  /* Təkli hissə */
			_putchar(c);
		}
		_putchar('\n');
	}
}
