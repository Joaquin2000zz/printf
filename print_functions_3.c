#include "main.h"

/**
 * hexA - prints the translation of n
 * @n: the number that we need to print
 * Return: length of the hexadecimal number
 */
int hexA(int n)
{
	int len = 0;

	/*if n greater than 15*/
	if (n / 16)
		len += hexA(n / 16);
	if ((n % 16) > 9)
		_printf("%c", ((n % 16) - 10) + 65);
	else
		_printf("%c", (n % 16) + 48);

	len++;
	return (len);
}

/**
 * op_hexA - prints the translation of n
 * @arg: the va_list
 * Return: length of the hexadecimal number
 */
int op_hexA(va_list arg)
{
	int len = 0, aux;
	unsigned int n;

	aux = va_arg(arg, int);
	n = aux;
	len = hexA(n);

	return (len);
}


/**
 * hexa - prints the translation of n
 * @n: the number that we need to print
 * Return: length of the hexadecimal number
 */
int hexa(int n)
{
	int len = 0;

	/*if n greater than 15*/
	if (n / 16)
		len += hexa(n / 16);

	if ((n % 16) > 9)
		_printf("%c", ((n % 16) - 10) + 97);
	else
		_printf("%c", (n % 16) + 48);

	len++;
	return (len);
}

/**
 * op_hexa - prints the translation of n
 * @arg: the va_list
 * Return: length of the hexadecimal number
 */
int op_hexa(va_list arg)
{
	int len = 0, aux;
	unsigned int n;

	aux = va_arg(arg, int);
	n = aux;
	len = hexa(n);

	return (len);
}
