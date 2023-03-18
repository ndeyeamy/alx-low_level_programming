#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The specific char to intialize the array with
 * Return: If malloc fails, the malloc_checked function should cause 
 * 	   normal process termination with a status value of 98.
 *         Otherwise - a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int i = malloc(b);
	return (i);

	if (b == NULL)
	return (98);

}
