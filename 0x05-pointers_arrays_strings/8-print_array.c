#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - put an char
 * @a: character to use
 * @n: another int
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d",a[i]);
	}
	printf("\n");
}
