#include "main.h"
/**
 * print_alphabet_x10 - affiche 10 fois l'alphabet
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
