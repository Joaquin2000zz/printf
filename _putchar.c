#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to write
 * Return: On success character is written with write()
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
