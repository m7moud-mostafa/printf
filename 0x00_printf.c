#include "main.h"
#include <stdio.h>

/**
 * _printf - write output to stdout, the standard output stream.
 * @format: creates the string that will be printed and formatted
 * Return: the number of characters printed (excluding the null byte
 *			used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int *len;
	int i;
	int final_length;

	len = malloc(sizeof(int));
	*len = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				c_handler(va_arg(args, int), len);
				break;
			case 's':
				s_handler(va_arg(args, char *), len);
				break;
			case '%':
				c_handler('%', len);
				break;
			}
			i++;
		}
		else
			c_handler(format[i], len);
	}
	va_end(args);
	final_length = *len;
	free(len);
	return (final_length);
}
