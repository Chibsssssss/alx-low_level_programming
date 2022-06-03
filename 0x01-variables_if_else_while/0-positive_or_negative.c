#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * @0 - Return Value
 * Return: This is my return
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n<0)
	{ 
		printf(n, "is negative");
	} else if (n=0)
	{
		printf(n, "is zero");
	} else 
	{
		printf(n, "is positive");
	}

}

