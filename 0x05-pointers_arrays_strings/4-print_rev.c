#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */
int print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for(i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
