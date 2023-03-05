#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - put an char
 * @dest: character to use
 * @src: another int
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
