include "main.h"

/*
 *
 */

int _printf(const char *format, ...)
{
	int i, total_char = 0;
	va_list ls;

	va_start(ls, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

	while (format && *format)
{
	if (*format == '%')
	{
		format++;
	
		switch (*format)
		{
			case 'c':
			total_char += print_char(ls);

			case 's':
			total_char += printf_string(ls);

			case '%';
			total_char += print_percent(ls);

			default:
			_putchar('%');
			_putchar(*format);
			total_char += 2;
		}
		format++;

	}
	else
	{
		_putchar(*format);
		total_char++;
		format++;
	}

va_end(ls);
return (total_char);
}
