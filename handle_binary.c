#include "main.h"

/**
 * print_bin - function that check if is binary
 * @n: number given
 * Return: length of string
 */
int print_bin(unsigned int n)
{
	char nbr;

	if (n >= 2)
		return (print_bin(n / 2) + print_bin(n % 2));
	nbr = '0' + n;
	return (write(1, &nbr, 1));
}
/**
 * handle_binary - function that print numbers
 * @ap: list
 * Return: length of string
 */
int handle_binary(va_list ap)
{
	return (print_bin(va_arg(ap, unsigned int)));
}
