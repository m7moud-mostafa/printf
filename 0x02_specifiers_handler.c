#include "main.h"
#include <stdio.h>
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

/**
 * i_handler - handles the i and d specifier
 *			   in ascii 0 --> 48 and 9 -->57
 * @num: the integer to be printed
 * @len: the printed length counter
 */
void i_handler(int num, int *len)
{
	int i;
	long tmp_num;
	int condition;
	int is_started = 0;
	char c;
	int level;

	tmp_num = num;

	if (num == 0)
	{
		c_handler('0', len);
		return;
	}
	if (num < 0)
	{
		c_handler('-', len);
		tmp_num *= -1;
	}

	for (i = 9; i >= 0; i--)
	{
		level = power(10, i);
		condition = tmp_num / level;
		tmp_num -= condition * level;

		if (condition || is_started)
		{
			is_started = 1;
			c = condition + '0';
			c_handler(c, len);
		}
	}

}

