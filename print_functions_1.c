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

		return (i);
		aux_rev(str + 1);
		_putchar(str[i]);
}

/**
 * op_rev - get the string argument
 *@arg: the argument
 *Return: the string
 */

int op_rev(va_list arg)
{
	int i, len = 0;
	char *str = va_arg(arg, char *);

	if (!str)
		return (_printf("(null)"));
		aux_rev(str);
	for (len = 0; str[len]; len++)
		;
	return (len - 1);
}
