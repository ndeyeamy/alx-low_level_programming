#include <stdio.h>
#include "main.h"
/**
 * _atoi - put an char
 * @s: character to use
 * Return: 0
 */
int _atoi(char *s)
{
	int signe =  1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= signe;
	return (res);
}
