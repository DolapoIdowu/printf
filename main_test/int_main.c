#include "main.h"

/**
 * main - Entry point.
 * Return: Always 0 on success.
 */
int main(void)
{
	unsigned int num1 = 44, num2 = 102, num3;

	num3 = num1 + num2;

	_printf("Addition of %u and %u is %u\n", num1, num2, num3);
	return (0);
}