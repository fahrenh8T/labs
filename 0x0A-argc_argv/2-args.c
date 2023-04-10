#include <stdio.h>
/**
 * main - prints all arguments t receives
 * @argc: number of arguments passed to the program
 * @argv: array stores the actual arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
