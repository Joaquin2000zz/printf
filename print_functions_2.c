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
    int n = va_arg(arg, int), i = 0;

	i = printBin(n);
    return (i);
}

/**
 *
 *  previous binary logic
 *
 *{
 *  unsigned int i = 0;
 *   int j;
 *   char arr[1024];
 *   unsigned int n = va_arg(arg, int);
 *
 *   while (n != 0)
 *   {
 *   arr[i] = (n % 2) + 48;
 *   n = n / 2;
 *   i++;
 *   }
 *
 *   for (j = (i - 1); j >= 0; j--)
 *   {
 *   _putchar(arr[j]);
 *   }
 *   return (i);
 *}
 **/

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
    return(i);
}

/**
 * op_oct - writes octal 
 * @arg: the argument given for the va_list
 * Return: the length of the octal
 */
int op_oct(va_list arg)
{
    int i, n;

    n = va_arg(arg, int);
    i = print_oct(n);
    return (i);
}
