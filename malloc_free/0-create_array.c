#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: number of elements in the array
 * @c: character used to initialize the array
 *
 * Return: pointer to the array, or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    /* If size is 0, no memory should be allocated */
    if (size == 0)
        return (NULL);

    /* Allocate memory for size number of chars */
    arr = malloc(sizeof(char) * size);
    if (arr == NULL)
        return (NULL);

    /* Initialize each element of the array with character c */
    for (i = 0; i < size; i++)
        arr[i] = c;

    /* Return pointer to the created array */
    return (arr);
}
