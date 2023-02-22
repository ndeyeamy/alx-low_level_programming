#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
