#include "main.h"

/**
 * c_handler - handles the c specifier inside (_printf) function
 *			   and print single characters
 *
 * @c: character to be printed
 * @len: the printed length counter
 */
void c_handler(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

/**
 * s_handler - handles the s specifier inside
 *			   (_printf) function (prints strings)
 *
 * @str: string to be printed
 * @len: the printed length counter
 */
void s_handler(char *str, int *len)
{
	int string_len;
	if (str == NULL)
		str = "(null)";
	string_len = _strlen(str);
	write(1, str, string_len);
	(*len) += string_len;
}
