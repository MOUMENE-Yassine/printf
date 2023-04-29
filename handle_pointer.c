#include "main.h"

/**
 * cast_to_hex - function that cast an int to hex
 * @n: input number
 * Return: length of string
 */
int cast_to_hex(unsigned long n)
{
	char c;

	if (n >= 16)
		return (cast_to_hex(n / 16) + cast_to_hex(n % 16));
	c = n <= 9 ? '0' + n : 'a' + n - 10;
	return (write(1, &c, 1));
}
/**
 * print_pointer - function that check code
 * @ap: list arguments
 * Return: nbr of char printed
 */
int handle_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	unsigned long x = (unsigned long) ptr;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + cast_to_hex(x));
}
