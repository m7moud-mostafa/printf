#include "main.h"

/**
 * _strlen - a function that calculates the length of a string.
 *
 * @str: string
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * power - calculates base ^ exponent
 *
 * @base: the base
 * @exponent: the exponent
 * Return: int
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result *= base;
		--exponent;
	}
	return (result);
}

#include <stdio.h>

#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;
	int tmp;

	while (s[length] != '\0')
		length++;

	j = length - 1;
	i = 0;

	while (i < length && i <= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
