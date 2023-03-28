#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string
 * Return: 0
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	return (sign * result);
}
