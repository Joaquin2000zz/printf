#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
int _pow_recursion(int x, int y);
int op_ch(va_list arg);
int op_str(va_list arg);
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

/**
 * struct bin_s - singly linked list
 * @str: string - malloc'ed 
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: linked list with bits
 */
typedef struct list_s
{
    int bit;
    struct list_s *next;
} list_t;

void printBin(int n);
int lenBin(int n);
int op_bin(va_list arg);
int aux_dec(int n);
printfar fstruct(int a);
int op_int(va_list arg);
int op_rev(va_list arg);
int op_STR(va_list arg);

#endif
