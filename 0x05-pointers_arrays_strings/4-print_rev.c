#include <stdio.h>
#include <string.h>

/**
 * print_rev - Entry point
 * Description: 'the program'sput the reverse word'
 * @s: describe the parameter
 * Return: Always 0 (Success)
 */
int print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
