#include <stdio.h>

/**
 * _pow_recursion - Returns the factorial of a given number.
 * @x: The number to make power.
 * @y: the ower
 * Return: If n > 0 - the power of x.
 *         If n < 0 - -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
