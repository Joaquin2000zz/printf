#include "main.h"

/**
 * printBin - prints the translation of n
 * @n: the number that we need to print
 * Return: void function
 */
void printBin(int n)
{

    /*if n greater than 1*/
    if (n > 1)
    {

        printBin(n / 2);
        _printf("%d", n % 2);
    }
    else
        _printf("%d", n);

}

/**
 * lenBin - obtains the len of a binary number
 * @n: the number that we need to know the length
 * Return: the length of the number in base 2
 */
int lenBin(int n)
{

    /*if n divisible to 2*/
    if (n > 1)
    {

        return(lenBin(n / 2) + 1);
    }

    return (1);
}


/**
  * op_bin - writes binary
  * @arg: arg to convert into binary
  * Return: return length of binary
  */
int op_bin(va_list arg)
{
    int n = va_arg(arg, int), i;

	printBin(n);
    i = lenBin(n);
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

