#include "main.h"

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to append
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* append at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add terminating null byte */
	dest[i] = '\0';

	return (dest);
}
