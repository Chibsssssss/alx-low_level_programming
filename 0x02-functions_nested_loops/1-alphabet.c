#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: void
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
