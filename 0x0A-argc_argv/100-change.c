#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments passed to the program
 * @argv: array store the actual arguments
 *
 * Return: 0 (successful), 1 (error)
*/
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int i;
	int change[] = {25, 10, 5, 2, 1};
	int num_change = sizeof(change) / sizeof(int);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_change; i++)
	{
		while (cents >= change[i])
		{
			coins++;
			cents -= change[i];
		}
	}

	printf("%d\n", coins);

	return (0);
}
