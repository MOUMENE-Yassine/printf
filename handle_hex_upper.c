#include "main.h"

/**
 * handle_hex_upper - function that print hex in upper case
 * @ap: list
 * Return: length of string
 */
int handle_hex_upper(va_list ap)
{
	return (cast_int(va_arg(ap, unsigned int), 16, 1));
}
