#include "main.h"

/**
 * op_ch - write a char
 * @arg: list of arguments to print
 * Return: char length
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
 * op_str - write a string
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

/**
 * aux_dec - write decimal to stout
 * @n: int to convert
 * Return: Returns length of int
 */

int aux_dec(int n)
{
	int largo = 0;
	unsigned int aux = 0;

	if (n < 0)
	{
		_putchar('-');
		aux = -n;
		largo++;
	}
	else
		aux = n;
	if (n / 10)
		largo += aux_dec(aux / 10);
	_putchar((aux % 10) + 48);
	largo++;
	return (largo);
}
/**
  * op_int - write integer to stdout
  * @arg: arg to print
  * Return: Returns length of the integer
  */
int op_int(va_list arg)
{
	int i = va_arg(arg, int);

	return (aux_dec(i));
}
