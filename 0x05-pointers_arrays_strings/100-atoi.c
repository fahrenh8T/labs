#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string
 * Return: 0
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
			s++;
		}
	}
	return (sign * result);
}
