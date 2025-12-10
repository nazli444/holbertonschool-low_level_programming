#include "main.h"

/**
 * _atoi - converts a string to an integer safely
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if (num > (2147483647 - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (num * sign);
}
