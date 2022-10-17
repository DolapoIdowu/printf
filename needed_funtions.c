#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 *	if there is error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_character - Prints character
 * @args: list of unknown argument
 * Return: The amount of characters printed.
 */
int print_character(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: list of unknown arguments
 * Return: The amount of characters of the string printed
 */

int print_string(va_list args)
{
	int count;
	char *str_ptr;

	str_ptr = va_arg(args, char *);

	if (str_ptr == NULL)
		str_ptr = "(nill)";
	count = 0;
	while (str_ptr[count] != '\0')
	{
		_putchar(str_ptr[count]);
		count++;
	}
	return (count);
}

/**
 * print_percent - Prints a percent symbol
 * @args: list of unknown arguments.
 * Return: The amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
