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
	char *len = dest;
	
	while (*len++ != '\0')
	{
		len++;
	}
        while (*src++ != '\0')
	{
		*len++ = *src++;
	}

	*len = '\0';

        return (len);
}
