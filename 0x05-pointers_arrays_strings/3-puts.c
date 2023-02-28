#include "main.h"

/**
 * _puts - print a char
 * @str - variable of entry
 * Return: Always 0 (Success)
 */
	int _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
	return (0);
}
