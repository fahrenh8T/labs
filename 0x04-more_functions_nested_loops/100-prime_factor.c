#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
*/
int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest_factor = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest_factor = factor;
			number /= factor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
		factor++;
	}

	printf("%ld\n", largest_factor);
	return (0);
}
