#include <stdio.h>
/**
 * jack_bauer - print the minute of the day
 *
 * Description: 'the program's description is print minute'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h;
	int m;
	
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
