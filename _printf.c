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
	int end_pos, op_pos, length = 0;

	if (!format)
		return (-1);
	va_start(arg, format);
	for (end_pos = 0; format[end_pos]; end_pos++)
	{
		if (format[end_pos + 1] == '\0' && format[end_pos] == '%')
			return (-1);
		if (format[end_pos] == '%')
		{
			if (format[end_pos + 1] == '%')
			{
				length++;
				_putchar(format[end_pos]);
				end_pos;
				continue;
			}
			for (op_pos = 0; fstruct(op_pos).op; op_pos++)
				if (fstruct(op_pos).op == format[1 + end_pos])
				{
					end_pos++;
					length += fstruct(op_pos).f(arg);
					break;
				}
			if (fstruct(op_pos).op == '\0')
			{
				_putchar(format[end_pos]);
				length++;
			}
		}
		else
		{
			_putchar(format[end_pos]);
			length++;
		}
	}
	va_end(arg);
	return (length);
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
