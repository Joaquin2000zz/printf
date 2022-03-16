#include "main.h"

/**
 * printBin - prints the translation of n
 * @n: the number that we need to print
 * Return: lentgth of binary
 */
int printBin(int n)
{
	int len = 0;

	/*if n greater than 1*/
	if (n > 1)
	{

		len += printBin(n / 2);
		_printf("%d", n % 2);
	}
	else
		_printf("%d", n);

	len++;
	return (len);
}

/**
  * op_bin - writes binary
  * @arg: arg to convert into binary
  * Return: return length of binary
  */
int op_bin(va_list arg)
{
	int aux = va_arg(arg, int), i = 0;
	unsigned int n;

	n = aux;
	i = printBin(n);
	return (i);
}

/**
 * print_oct - writes octal
 * @n: the argument given for the va_list
 * Return: the length of the octal
 */
int print_oct(int n)
{
	int i = 0;

	if (n / 8)
		i += print_oct(n / 8);
	_putchar((n % 8) + 48);
	i++;
	return (i);
}

/**
 * op_oct - writes octal
 * @arg: the argument given for the va_list
 * Return: the length of the octal
 */
int op_oct(va_list arg)
{
	int i, aux;
	unsigned int n;

	aux = va_arg(arg, int);
	n = aux;
	i = print_oct(n);
	return (i);
}
