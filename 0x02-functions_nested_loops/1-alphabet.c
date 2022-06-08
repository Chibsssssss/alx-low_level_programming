#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
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
