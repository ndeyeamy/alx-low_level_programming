#include <stdio.h>
/**
 * main - print_alphabet
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
