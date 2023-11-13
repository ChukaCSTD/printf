#include "main.h"
/**
 * print_char - prints character
 * @list: argument list
 *
 * Return: retunrs 1 when successful
 */
int print_char(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
}
