#include "main.h"

/**
 * handle_specifier - function that handle all the specifiers code
 * @specifier: character specifier
 * @ap: variadic list
 * Return: length of string
 */
int handle_specifier(const char *specifier, va_list ap)
{
	conversion conversions[] = {
	  {"c", handle_char},
	  {"i", handle_integer},
	  {"d", handle_integer},
	  {"R", handle_rot13},
	  {"r", handle_rev_string},
	  {"b", handle_binary},
	  {"o", handle_octal},
	  {"x", handle_hex},
	  {"X", handle_hex_upper},
	  {"u", handle_unsigned_int},
	  {"s", handle_string},
	  {"S", handle_non_printable},
	  {"p", handle_pointer},
	  {NULL, NULL}
	};
	int j;

	j = 0;
	while (conversions[j].fnc != NULL && *specifier != *(conversions[j].type))
		j++;
	return (conversions[j].fnc != NULL ? conversions[j].fnc(ap) : -1);
}
/**
 * _printf - function to print.
 * @format: format to display
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int i = 0, r, len = 0, cdt = 0;
	va_list ap;
	char c = '%';

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == c && cdt == 0)
			cdt = 1;
		else if (cdt == 1)
		{
			r = handle_specifier(format + i, ap);
			len += r < 0 ? write(1, &c, 1)
			  + (format[i] == c ? 0 : write(1, format + i, 1)) : r;
			cdt = 0;
		}
		else
			len += write(1, format + i, 1);
		i++;
	}
	va_end(ap);
	return (format == NULL ? -1 : len);
}
