#include <unistd.h>
/**
 * _putchar - prints a single character to stdout
 * @c: character to print
 *
 * Return: 1 on success and -1 if any error encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
