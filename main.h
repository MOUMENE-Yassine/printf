#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int handle_char(va_list);
int handle_string(va_list);
int handle_integer(va_list);
int handle_binary(va_list);
int handle_octal(va_list);
int handle_hex(va_list);
int handle_hex_upper(va_list);
int handle_non_printable(va_list);
int handle_rev_string(va_list);
int handle_rot13(va_list);
int handle_pointer(va_list);
int handle_unsigned_int(va_list);
int cast_int(unsigned int, unsigned int, int);
int _puts_recursion(char *);
int _printf(const char *, ...);

/**
 *struct _conversion - Struct _conversion
 *@type: type of specifier
 *@fnc: print function
 */
typedef struct _conversion
{
	char *type;
	int (*fnc)(va_list);
} conversion;

#endif
