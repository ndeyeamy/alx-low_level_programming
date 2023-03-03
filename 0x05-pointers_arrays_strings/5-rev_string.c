#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s: parameters
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char temp;
	
	while (i < j)
	{
        	temp = s[i];
        	s[i] = s[j];
        	s[j] = temp;
        	i++;
        	j--;
    	}
}
