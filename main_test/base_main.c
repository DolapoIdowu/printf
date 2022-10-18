#include "main.h"

/**
 * main - Entry point.
 * Return: 0 alwways.
 */
int main(void)
{
	unsigned int a;

	a = 30;
	_printf("base 2: %b\nbase 8: %o\nbase 16 upper: %X\n
			base 16 lowwer: %x\n", a, a, a, a);
	return (0);
}
