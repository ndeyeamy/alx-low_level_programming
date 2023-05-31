#include "main.h"

/**
 * _puts - print a char
 * @str: - variable of entry
 * Return: Always 0 (Success)
 */
	void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
