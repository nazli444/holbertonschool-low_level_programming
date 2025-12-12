#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				new_word = 1;
				break;
			}
			j++;
		}

		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		if (!(s[i] == sep[j]))
		{
			new_word = 0;
		}

		i++;
	}

	return (s);
}
