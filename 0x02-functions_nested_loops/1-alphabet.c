#include <stdio.h>
/**
 * main - entry point
 * Description: 'print alphabet'
 * Return: Always returns 0
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
