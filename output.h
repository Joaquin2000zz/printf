#ifndef OUTPUT_H
#define OUTPUT_H

int _printf(const char *format, ...);

/**
 * struct _printf - Struct that manage the parameter kinds
 *
 * @kind: kind of parameter
 * @f: The function associated
 */
typedef struct _printf
{
	char *kind[];
	char (*f)(char c);
	char (*f)(char *s);

} printf;

