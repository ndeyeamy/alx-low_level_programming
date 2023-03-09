#include <stdio.h>

/**
 * _print_rev_recursion - prints the the reverse recursion
 * @s: the int to extract the last digit from
 * Return: value of the last digit
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
