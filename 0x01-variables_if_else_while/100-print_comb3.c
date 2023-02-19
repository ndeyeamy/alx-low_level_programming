#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: The two digits must be different
 * eturn: Always 0 (success)
 */
int main(void)
{
	int j, k;

	for( j = 0 ; j <= 8; ++j)
	{

		for( k = j + 1; k <= 9; ++k)
		{
			printf("%d%d", j, k);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
