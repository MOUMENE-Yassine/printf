#include "main.h"

/**
 * is_decimal_ - print numbers in decimal
 * @n: number given
 * Return: length of string
 */
int is_decimal_(unsigned int n)
{
	char nbr;

	if (n >= 10)
		return (is_decimal_(n / 10) + is_decimal_(n % 10));
	nbr = '0' + n;
	return (write(1, &nbr, 1));
}
/**
 * handle_unsigned_int - function that print numbers
 * @ap: list
 * Return: length of string
 */
int handle_unsigned_int(va_list ap)
{
	return (is_decimal_(va_arg(ap, unsigned int)));
}
