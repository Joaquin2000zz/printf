#include "main.h"

/**
 * op_ch - return a char
 * @arg: list of arguments to print
 * Return: string length
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
 * op_str - return a string
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
 * aux_dec - return a int converted in string
 * @n: int to convert
 *
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
  * op_int - return a interger to convert with aux_dec to char
  * @arg: arg to print
  * Return: a interger
  */
int op_int(va_list arg)
{
	int i = va_arg(arg, int);

	return(aux_dec(i));
}
