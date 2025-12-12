#include "main.h"

/**
 * _memset - fills the first n bytes of memory area s with constant byte b
 * @s: pointer to memory area
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return (s);
}
