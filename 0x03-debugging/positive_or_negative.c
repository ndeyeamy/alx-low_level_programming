#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
int positive_or_negative(int n)
{
        if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else
        {
                printf("%d is zero\n", n);
        }
        return (0);
}
