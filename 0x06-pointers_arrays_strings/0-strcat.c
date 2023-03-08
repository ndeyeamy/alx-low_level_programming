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
	int  i;
	
	while (*dest++ != '\0')
		dest++;
        for (i = 0; *src; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
        return (len);
}
