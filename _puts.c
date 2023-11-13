#include <unistd.h>
/**
 * _puts - prints a string to the stdout
 * @str: string to be printed
 *
 * Return: total number of character printed
 */
int _puts(const char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++
	}
	return (count);
}
