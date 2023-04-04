#include "main.h"
/**
 * _memcpy - copies memory area from one location to another
 * @dest: pointer to destination buffer to be copied
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *bgn = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (bgn);
}
