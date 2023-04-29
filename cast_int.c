#include "main.h"
/**
 * cast_int - function that cast an int to binary, octal, hex.
 * @n: input number
 * @b: an int given
 * @cdt: condition
 * Return: length of string
 */
int cast_int(unsigned int n, unsigned int b, int cdt)
{
	char c;

	if (n >= b)
		return (cast_int(n / b, b, cdt)
			+ cast_int(n % b, b, cdt));
	c = cdt ? 'A' : 'a';
	c = n <= 9 ? '0' + n : c + n - 10;
	return (write(1, &c, 1));
}
