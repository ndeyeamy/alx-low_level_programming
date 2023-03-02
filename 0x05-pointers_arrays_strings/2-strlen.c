#include <stdio.h>
#include <string.h>

/**
 * _strlen - Entry point
 * Description: 'the program take apointer int and give 98 in output'
 * @s: The number to be checke
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != 0)
	{
	length++;
	s++;
	}
	return (length);
}
