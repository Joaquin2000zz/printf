#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int op_ch(va_list arg);
int op_str(va_list arg);
int op_bin(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
char *freear(char *final);

/**
 * struct objprintf - A struct that has two types;
 * a char type and a function type
 * @op: char type
 * @f: a function that accepts va_list arg and returns a pointer to a function.
 */
typedef struct objprintf
{
	char op;
	int (*f)(va_list arg);

} printfar;
int aux_dec(int n);
printfar fstruct(int a);
int op_int(va_list arg);

#endif
