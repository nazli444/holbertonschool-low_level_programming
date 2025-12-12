#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (!*needle) /* if needle is empty, return haystack */
        return haystack;

    for (i = 0; haystack[i]; i++)
    {
        for (j = 0; needle[j]; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (!needle[j])
            return haystack + i;
    }
    return 0; /* not found */
}
