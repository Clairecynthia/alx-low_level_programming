/*
 * File: 101-quote.c
 * Auth: Emenike Claire
 */

#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a  new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);

	return (1);
}
