#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - get a parameter to print
 *
 * @format: format to print
 * Return: the operator needed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int end_pos, op_pos, lformat = 0, j;
	char final[1024];

	if (!format)
		return (-1);
	va_start(arg, format);
	for (end_pos = 0; format[end_pos]; end_pos++)
	{
		if (format[end_pos] == '%')
		{
			if (format[end_pos + 1] == '%')
			{
				final[lformat] = format[end_pos];
				end_pos++;
				lformat++;
			}
			for (op_pos = 0; fstruct(op_pos).op; op_pos++)
			{
				if (fstruct(op_pos).op == format[end_pos + 1])
				{
					end_pos++;
					lformat += fstruct(op_pos).f(arg, final, lformat);
				}
			}
		}
		else
		{
			final[lformat] = format[end_pos];
			lformat++;
		}
		final[lformat + 1] = '\0';
	}
	va_end(arg);
	for (j = 0; final[j] != 0; j++)
		_putchar(final[j]);
	freear(final);
	return (j);
}

/**
  * fstruct - define the array list of the parameters
  * @a: position of the parameter needed
  * Return: the operation that you need
  */

printfar fstruct(int a)
{
	printfar ops[] = {
		{'c', op_ch},
		{'s', op_str},
		{'\0', '\0'}
	};
	return (ops[a]);
}

/**
  * freear - free the array
  * @final: string to print
  * Return: the string clean
  */
char *freear(char *final)
{
	int j;

	for (j = 0; final[j] != 0; j++)
		final[j] = '\0';
	return (final);
}


/**
 * op_ch - return a character
 * @arg: list of arguments to print
 * @final: string to print
 * @lformat: long of the string to print
 * Return: char length
 */
int op_ch(va_list arg, char *final, int lformat)
{
	char s = va_arg(arg, int);

	if (s)
	{
		final[lformat] = s;
		return (1);
	}
	else
		return (-1);
}

/**
 * op_str - return a string
 * @arg: list of arguments to print
 * @final: string to print
 * @lformat: long of the string to print
 * Return: string length
 */
int op_str(va_list arg, char *final, int lformat)
{
	int i;
	char *s = va_arg(arg, char *);

	if (s)
	{
		for (i = 0; s[i] != 0; i++)
			final[lformat + i] = s[i];
		return (i);
	}
	else
		return (-1);
}
