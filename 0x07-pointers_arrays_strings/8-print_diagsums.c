#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to an integer array
 * @size: integer, size of matrix
 *
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int add1 = 0, add2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		add1 += a[i * size + 1];
		add2 += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", add1);
	printf("%d\n", add2);
}
