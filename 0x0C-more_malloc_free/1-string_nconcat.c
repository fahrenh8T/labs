#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n: number of characters to concatenate from s2
 *
 * Return: pointer or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];

	ptr[len1 + n] = '\0';

	return (ptr);
}
