#include "main.h"

/**
 * cast_string - function that cast an int to decimal.
 * @n: input number
 * Return: length of string
 */
int cast_string(const int n)
{
	char sign = '-', nbr;

	if (n < 0)
	{
		if (n == INT_MIN)
			return (cast_string(n / 10) + cast_string(-(n % 10)));
		return (write(1, &sign, 1) + cast_string(-n));
	}
	if (n >= 10)
		return (cast_string(n / 10) + cast_string(n % 10));
	nbr = '0' + n;
	return (write(1, &nbr, 1));
}
/**
 * handle_integer - function that print numbers
 * @ap: list
 * Return: length of string
 */
int handle_integer(va_list ap)
{
	return (cast_string(va_arg(ap, int)));
}
