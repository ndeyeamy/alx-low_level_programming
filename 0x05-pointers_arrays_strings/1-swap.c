#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * Description: 'the program take apointer int and give 98 in output'
 * @a: The number to be checkeà
 * @b: the number
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
