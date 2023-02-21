#include <unistd.h>
/**
 * main - Entry point
 * Description: 'prints the size of various types'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const size_t len = sizeof(msg) - 1;
	write (STDERR_FILENO, msg, len);
	return (1);
}
