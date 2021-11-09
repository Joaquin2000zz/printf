#include "main.h"

/**
 * op_ch - return a char
 * @arg: list of arguments to print
 * Return: string length
 */

int op_ch(va_list arg)
{
	char s = va_arg(arg, int);
	int i = 0;

	_putchar(s);
	i++;
	return (i);
}

/**
 * op_str - return a string
 * @arg: list of arguments to print
 * Return: string length
 */

int op_str(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		i = (_printf("(null)"));
	else
		for (i = 0; s[i] != 0; i++)
			_putchar(s[i]);
	return (i);
}
