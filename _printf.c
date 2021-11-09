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

	if (!format)
		return (-1);
	va_start(arg, format);
	for (end_pos = 0; format[end_pos]; end_pos++)
	{
		if (format[end_pos + 1] == '\0' && format[end_pos] == '%')
		{
			_putchar(format[end_pos]);
			return (-1);
		}
		if (format[end_pos] == '%')
		{
			end_pos++;
			if (format[end_pos] == '%')
			{
				_putchar(format[end_pos]);
				end_pos++;
				lformat++;
			}
			for (op_pos = 0; fstruct(op_pos).op; op_pos++)
			{
				if (fstruct(op_pos).op == format[end_pos])
				{
					end_pos++;
					end_pos += fstruct(op_pos).f(arg);
				}
			}
		}
		else
		{
			_putchar(format[end_pos]);
			lformat++;
		}
	}
	va_end(arg);
	return (end_pos);
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
