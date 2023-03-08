#include "main.h"
#include <stdio.h>

/**
 * _strcat- overwriting the terminating null byte 
 * @dest: The destination
 * @src: The character to source.
 *
 * Return the dstination.
 */
char *_strcat(char *dest, char *src)
{
	
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
