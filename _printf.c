#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 *	print a formated string.
 * @format: A string of characters.
 * Return: Length of characters printed.
 */
int _printf(const char *format, ...)
{
	int len_printed_char;
	linker linked_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"u", print_unsigned_int},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len_printed_char = linking_func(format, linked_list, args);
	va_end(args);
	return (len_printed_char);
}
