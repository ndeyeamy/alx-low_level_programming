#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 > 5)
	{
		printf("%d the string and is greater than 5\n", n);
	}
	else if (n%10 < 6 && n != 0)
	{
		printf("%d the string and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d Last digit is 0\n", n);
	}
	return (0);
}
