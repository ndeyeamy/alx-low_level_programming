#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code
 * @str: parameters
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int n = (length - 1) / 2;
	int nn = n++;

	for (i = nn; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
