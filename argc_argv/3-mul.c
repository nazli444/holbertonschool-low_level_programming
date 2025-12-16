#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3) /* check if exactly 2 arguments are passed */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* convert first argument to integer */
	num2 = atoi(argv[2]); /* convert second argument to integer */
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
