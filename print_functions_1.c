#include "main.h"

/**
  * op_rev - reverse a string
  * @arg: string to reverse
  * Return: string length
  */
int op_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, j;

	if (!str)
		return (-1);

		while (str[i])
			i++;
		j = i;
		while (i >= 0)
		{
			_putchar(str[i]);
			i--;
		}
		return (j);
}
