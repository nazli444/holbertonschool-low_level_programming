#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new string, or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* find lengths */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	new_str = malloc(len1 + len2 + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
