#include "main.h"

/**
 * op_ch - return a char
 * @arg: list of arguments to print
 * @final: char to print
 * @lformat: long of the char to print
 * Return: string length
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
