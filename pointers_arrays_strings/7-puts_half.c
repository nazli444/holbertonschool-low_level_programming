#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    /* calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* start index for second half */
    if (length % 2 == 0)
        i = length / 2;
    else
        i = (length + 1) / 2;

    /* print second half */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
