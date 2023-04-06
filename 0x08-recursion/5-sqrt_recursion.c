#include "main.h"
/**
 * find_sqrt - helper function for _sqrt_recursion
 * @n: integer to compute square root of
 * @num: current num at square root
 *
 * Return: natural square root of n if it exists or -1
 */
int find_sqrt(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	return (find_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n: integer to compute square root of
 *
 * Return: natural square root of n if it exists or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
