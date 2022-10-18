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

	p = rev_strings(s);
	if (p == NULL)
		return (0);

	for (lens = 0; p[lens] != '\0'; lens++)
		_putchar(p[lens]);

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
<<<<<<< HEAD
	for (n = 0; s[n] != '\0'; n++)
=======

	for (n = 0; str[n] != '\0'; n++)
>>>>>>> 890bce1a2267d3c3d371944f27f2c5756b17c252
	{
		for (d = 0; d <= 52; d++)
		{
			if (s[n] == r[d])
			{
				_putchar(u[d]);
				break;
			}
		}
		if (d == 53)
			_putchar(s[n]);
	}
	return (n);
}

