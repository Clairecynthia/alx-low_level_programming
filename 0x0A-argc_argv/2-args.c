#include <stdio.h>
#include <stdlib.h>

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

		while (i < argc)
			printf("%s\n", argv[i++]);

	return (0);
}
