0x11. C - printf

This project is a simple creation of a _printf function that formats and prints data to the standard output.

Task 0.
Write a function that produces output according to a format.
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Task 1
Handle the following conversion specifiers:
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Task 2
Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary
alex@ubuntu:~/c/printf$ cat main.c

#include "main.h"



/**

 * main - Entry point

 *

 * Return: Always 0

 */

int main(void)

{

    _printf("%b\n", 98);

    return (0);

}

alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c

alex@ubuntu:~/c/printf$ ./a.out

1100010

alex@ubuntu:~/c/printf$
