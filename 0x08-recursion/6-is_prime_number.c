#include "main.h"
/**
 * prime_number - helper function for is_prime_number
 * @n: number to checked if prime or not
 * @i: current divisor candidate
 *
 * Return: 1 if n is prime, 0 otherwise
*/
int prime_number(int n, int i)
{
	if (n <= i)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: integer to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
