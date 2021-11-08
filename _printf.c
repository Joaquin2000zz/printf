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
	int end_pos, op_pos, larg, lformat = 0, j;
	char final[1024];
	printfar ops[] = {
		{'c', op_ch},
		{'s', op_str},
		{'\0', '\0'}
		};
	va_start(arg, format);
	for (end_pos = 0; format[end_pos]; end_pos++)
	{
		if (format[end_pos] == '%')
		{
			end_pos++;
			if (format[end_pos] == '%')
			{
				final[lformat] = format[end_pos];
				lformat++;
				continue;
			}
			for (op_pos = 0; ops[op_pos].op; op_pos++)
			{
				if (ops[op_pos].op == format[end_pos])
				{
					lformat += ops[op_pos].f(arg, final, lformat);
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
		putchar(final[j]);
	return (lformat);
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
	int i;
	char *s = va_arg(arg, char *);

	for (i = 0; s[i] != 0; i++)
	{
		final[lformat] = s[i];
		lformat++;
	}
	return (i);
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

	for (i = 0; s[i] != 0; i++)
	{
		final[lformat + i] = s[i];
	}
	return (i);
}
