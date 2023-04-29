#include "main.h"

/**
 * handle_char - function that handle the characters.
 * @ap: list
 * Return: returns 1
 */
int handle_char(va_list ap)
{
	int x;
	char c;

	x = va_arg(ap, int);
	if (x < 0)
		return (x);
	c = (char)x;
	return (write(1, &c, 1));
}
