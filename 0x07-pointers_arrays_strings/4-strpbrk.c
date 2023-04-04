#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to look for
 *
 * Return: points to bytes in s or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return (NULL);
}
