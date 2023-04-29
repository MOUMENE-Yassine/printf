#include "main.h"

/**
 * handle_hex - function that print numbers in hex.
 * @ap: list
 * Return: length of string
 */
int handle_hex(va_list ap)
{
	return (cast_int(va_arg(ap, unsigned int), 16, 0));
}
