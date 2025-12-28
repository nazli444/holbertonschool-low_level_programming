#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
