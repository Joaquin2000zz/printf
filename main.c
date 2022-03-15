#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

    _printf("8 en octal:\n");
	i = _printf("%o\n", 8); 
	_printf("largo del print anterior: %d\n",i);

    _printf("255 en octal:\n");
    i = _printf("%o\n", 255);
    _printf("largo del print anterior: %d\n",i);
    
    _printf("192 en octal:\n");
    i = _printf("%o\n", 192);
    _printf("largo del print anterior: %d\n",i);
    
    _printf("420 en octal:\n");
    i = _printf("%o\n", 420);
    _printf("largo del print anterior: %d\n",i);

    _printf("4 en octal:\n");
    i = _printf("%o\n", 4);
    _printf("largo del print anterior: %d\n",i);

    _printf("1 en octal:\n");
    i = _printf("%o\n", 1);
    _printf("largo del print anterior: %d\n",i);

    _printf("0 en octal:\n");
    i = _printf("%o\n", 0);
    _printf("largo del print anterior: %d\n",i);

    return (0);
}
