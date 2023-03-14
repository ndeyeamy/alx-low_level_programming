#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
