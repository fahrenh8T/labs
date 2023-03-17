#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This program assigns a random number to the variable.
 * Excutes and prints the last digit of n and whether >5, <6 and not 0 or 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}
