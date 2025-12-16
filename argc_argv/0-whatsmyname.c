#include <stdio.h>

/**
 * main - prints the program's name, followed by a new line
 * @argc: argument count (not used)
 * @argv: argument vector (array of strings)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* argc is unused, so we silence the warning */
	printf("%s\n", argv[0]);
	return (0);
}
