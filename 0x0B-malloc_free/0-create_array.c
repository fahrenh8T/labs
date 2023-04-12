#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars
 * @size:number of characters that the array will be able to hold
 * @c: character in array
 *
 * Return: NULL, array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
