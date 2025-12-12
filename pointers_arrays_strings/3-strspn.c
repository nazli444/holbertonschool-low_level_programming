#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing allowed characters
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *a;

    while (*s)
    {
        a = accept;
        while (*a)
        {
            if (*s == *a)
                break;
            a++;
        }
        if (!*a)
            return (count);
        count++;
        s++;
    }

    return (count);
}
