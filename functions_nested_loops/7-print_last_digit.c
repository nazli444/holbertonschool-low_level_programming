#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;       /* Get last digit */
	if (last < 0)         /* Handle negative numbers safely, including INT_MIN */
		last = -last;

	_putchar('0' + last);
	return (last);
}
