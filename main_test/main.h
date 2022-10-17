#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/*creation of structure*/

/**
 * struct linker - defines a structure for symbols and functions
 * @sym: the format specifier symbol.
 * @func_ptr: pointer function to @sym associated function.
 */
typedef struct linker
{
	char *sym;
	int (*func_ptr)(va_list);
}linker;

/*needed functions*/

int _putchar(char c);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(__attribute__((unused))va_list args);


/*main functions*/

int _printf(const char *format, ...);
int linking_func(const char *format, linker linked_list[], va_list args);
#endif
