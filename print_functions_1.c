#include "main.h"

/**
  * op_rev - reverse a string
  * @arg: list string to reverse
  * Return: string length
  */
int op_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, j = 0;

	if (!str)
		return (-1);

		while (str[i])
			i++;
		j = i;
		while (j >= 0)
		{
			_putchar(str[j]);
			j--;
		}
		return (i);
}
