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
