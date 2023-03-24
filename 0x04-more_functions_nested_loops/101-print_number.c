#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int i, j, k;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = n;
	j = 1;

	while (i > 9)
	{
		j *= 10;
		i /= 10;
	}

	while (j > 0)
	{
		k = n / j;
		_putchar(k + '0');
		n -= k * j;
		j /= 10;
	}
}
