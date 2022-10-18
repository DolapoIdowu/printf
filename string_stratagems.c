#include "main.h"

/**
 * print_reversed - calls a function to reverse and prints a string
 * @args: argument passed to the function
 * Return: characters printed
 */

int print_reversed(va_list args)
{
	int lens;
	char *s;
	char *p;

	s = va_arg(args, char *);
	if (s == NULL)
	return (0);
	p = rev_string(s);
	if (p == NULL)
	return (0);
	for (lens = 0; p[lens] != '\0'; lens++)
	_put_char(p[lens]);
	free(p);
	return (lens);
}

/**
 * rot13 - Converts string to rot13
 * @args: string to convert
 * Return: converted string
 */

int rot13(va_list args)
{
	int n;
	int d;
	char *s;
	char r[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	if (s == NULL)
		return (0);
	for (n = 0; str[n] != '\0'; n++)
	{
		for (d = 0; d <= 52; d++)
		{
			if (s[n] == r[d])
			{
				_put_char(u[d]);
				break;
			}
		}
		if (d == 53)
			_put_char(s[n]);
	}
	return (n);
}

