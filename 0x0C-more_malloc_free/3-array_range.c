#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: The values from min.
 * @max: The values from max.
 *
 * Return: the pointer to the newly created array
 *	    if min > max, return NULL
 *	    If malloc fails, return NULLnter to the allocated memory.
 */
int *array_range(int min, int max)
{
	int i , *array, size;
	
	if (min > max)
		return (NULL);

	size = max - min + 1;
	
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	       array[i] = min++;

	return (array);
}
