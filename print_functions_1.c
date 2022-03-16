#include "main.h"
#include <stdarg.h>

/**
 * aux_rev - prints reversed string with recursion
 *@str: the string to reverse
 *Return: the string
 */

int aux_rev(char *str)
{
	int i = 0;

	if (*str == 0)
	{
		return (0);
	}
	i += aux_rev(str + 1);
	_putchar(str[i]);
	i++;
	return (i);
}

/**
 * op_rev - get the string argument
 *@arg: the argument
 *Return: the string
 */

int op_rev(va_list arg)
{
	int len;
	char *str = va_arg(arg, char *);

	if (!str)
		return (_printf("%r", "(null)"));
	len = aux_rev(str);
	return (len);
}

/**
 * op_STR - Handle the following custom conversion specifier
 *@arg: the argument
 *Return: the string custom conversion specifier
 */

int op_STR(va_list arg)
{
	int i = 0, j = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		i = (_printf("(null)"));
	else
		for (i = 0; s[i] != 0; i++)
		{
			if (s[i] < 32 || s[i] >= 127 || s[i] < 0)
			{
				_putchar(92);
				_putchar('x');
				j += hexA(s[i]);
			}
			else
				_putchar(s[i]);
		}
	return (i + j);
}
