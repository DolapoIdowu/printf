#include "main.h"

/**
 * print_unsigned - prints unsigned integer.
 * @n: unsigned integer
 * Return: len of numbers printed.
 */

int print_unsigned(unsigned int n)
{
	int number_len, div;
	unsigned int num;

	div = 1;
	number_len = 0;
	num = n;

	while (num / div
