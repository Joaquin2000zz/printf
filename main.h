#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int op_ch(va_list arg);
int op_str(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
char *freear(char *final);


/**
 * struct objprintf - Struct that manage the parameter kinds
 * @op: kind of parameter
 * @f: The function associated
 */
typedef struct objprintf
{
	char op;
	int (*f)(va_list arg);

} printfar;

printfar fstruct(int a);

#endif
