#include "main.h"

/**
 * main - Entry point
 * @0 - Return value
 * Return: Anything
 *
 */
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
