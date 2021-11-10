Team Project
_printf

Description
The printf function sends formatted output to stdout. A custom _printf() for learning purposes was developed by cohort #0921 MVD students - Joaquin Victoria - Sahin Meric.
_printf() function format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage '%' operator

Authorized functions and macros
write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

Compilation
The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): #include main.h

Use & Examples
Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Holberton", "Hello");`

Output: Hello Holberton
Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A
Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

Files contained in this repository
Name			Information											Relevant Files
man_3_printf		Man page of the _printf() function.								None
main.h			Header file with the data type struct, standard libraries and custom prototypes.		*.c compilation
_printf.c		Main printf function file. Calls other functions.						printf_(name of var).c file
print_functions.c	Includes op_chr, op_str, op_dec.. functions
_putchar.c		Custom putchar function.									None

Authors ©
Joaquin Victoria,
Sahin Meric
