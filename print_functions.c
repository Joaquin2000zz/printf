#include "main.h"

/**
 * op_ch - return a char
 * @arg: list of arguments to print
 * Return: string length
 */

int op_ch(va_list arg)
{
	char s = va_arg(arg, int);

	if (s)
	{
	_putchar(s);
		return (1);
	}
	else
	return (-1);
}

/**
 * op_str - return a string
 * @arg: list of arguments to print
 * Return: string length
 */

int op_str(va_list arg)
{
	int i;
	char *s = va_arg(arg, char *);

	if (s)
	{
		for (i = 0; s[i] != 0; i++)
			_putchar(s[i]);
		return (i);
	}
	else
	{
		return (-1);
	}
}
