#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: the string to modify
 *
 * Return: the modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
