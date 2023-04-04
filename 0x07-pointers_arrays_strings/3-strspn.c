#include "main.h"
#include <stddef.h>
/**
 * _strspn - gets the length of prefix substring
 * @s: string to search
 *@accept: string of bytes to accept
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			break;
			}
			if (accept[j] == '\0')
			break;
	}
	return (i);
}
