#include "main.h"

/**
 * rev_strings - reverses a string
 *
 * @t: string to reverse
 * Return: a pointer to a character
 */

char *rev_strings(char *t)
{
	int lens;
	int up;
	char bot;
	char *dest;

	for (lens = 0; t[lens] != '\0'; lens++)
	{}

	dest = malloc(sizeof(char) * lens + 1);
	if (dest == NULL)
		return (0);

	_memcpy(dest, t, lens);
	for (up = 0; up < lens; up++, lens--)
	{
		bot = dest[lens - 1];
		dest[lens - 1] = dest[up];
		dest[up] = bot;
	}
	return (dest);
}

/**
 * put_base - sends character on standard outputput
 * @str: string to parse
 */
void put_base(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
}
/**
 * base_lens - calculates the octal number length
 * @num: number of length being calculated
 * @base: base to be calculated
 * Return: integer length of a number
 */
unsigned int base_lens(unsigned int num, int base)
{
	unsigned int n;

	for (n = 0; num > 0; n++)
	{
		num = num / base;
	}
	return (n);
}

/**
 * _memcpy - copies memory area
 * @dest: destination for copying
 * @sc: source to copy from
 * @nr: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *sc, unsigned int nr)
{
	unsigned int n;

	for (n = 0; n < nr; n++)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}
