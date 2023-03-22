#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory for an array of nmemb elements of size
 * @nmemb: The number of elements .
 * @size: The size of element
 * Return: if nmemb or size is 0, then _calloc returns NULL.
 *         If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{	
	void *ptr;
	
	if (nmemb == 0 || size == 0)
	{
		return NULL;
    	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return NULL;
	}	
	
	memset(ptr, 0, nmemb * size);
	return ptr;
}
