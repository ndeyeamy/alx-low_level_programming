#include <stdio.h>
#include "main.h"
/**
 * main - print the lphabet in lowercase
 *
 * Description: 'the program's description is print_alphabet'
 *
 * Return: Always 0 (Success)
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
