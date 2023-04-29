#include "main.h"

/**
 * handle_non_printable - function that handle the non printable char.
 * @ap: list arguments
 * Return: nbr of char printed
 */
int handle_non_printable(va_list ap)
{
	int i, len = 0;
	char *s = va_arg(ap, char *), zero = '0';
	unsigned int x;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			len += write(1, "\\x", 2);
			x = (unsigned int)s[i];
			if (x < 16)
				len += write(1, &zero, 1);
			len += cast_int(x, 16, 1);
		}
		else
			len += write(1, s + i, 1);
	}
	return (len);
}
