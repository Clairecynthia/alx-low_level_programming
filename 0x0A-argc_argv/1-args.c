#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: argument counter
 * @argv: pointer to array of argumeents
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
		if (argc > 0)
			printf("%d\n", argc - 1);

	return (0);
}
