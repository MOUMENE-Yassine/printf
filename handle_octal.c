#include "main.h"

/**
 * handle_octal - function that print octal numbers
 * @ap: list
 * Return: length of string
 */
int handle_octal(va_list ap)
{
	return (cast_int(va_arg(ap, unsigned int), 8, 0));
}
