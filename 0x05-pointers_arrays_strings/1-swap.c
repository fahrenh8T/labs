#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *@a: swap to 42
 *@b: swap to 98
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}
