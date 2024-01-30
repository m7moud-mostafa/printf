#include "main.h"

/**
 * _printf - write output to stdout, the standard output stream.
 * @format: creates the string that will be printed and formatted
 * Return: the number of characters printed (excluding the null byte
 *			used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int i;
	char *str;
	char c;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				c = va_arg(args, int);
				write(1, &c, 1);
				len++;
				break;
			case 's':
				str = va_arg(args, char *);
				write(1, str, _strlen(str));
				len += _strlen(str);
				break;
			case '%':
				c = '%';
				write(1, &c, 1);
				len++;
				break;
			}
			i++;
		}
		else
		{
			c = format[i];
			write(1, &c, 1);
			len++;
		}
	}
	va_end(args);
	return (len);
}
