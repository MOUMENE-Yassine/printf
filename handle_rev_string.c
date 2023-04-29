#include "main.h"

/**
 * _rev_string - function that reverse the string
 * @s: output string
 * Return: length of string
 */
int _rev_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (_rev_string(s + 1) + write(1, s, 1));
}
/**
 * handle_rev_string - function that reverse the string
 * @ap: list
 * Return: length of string
 */
int handle_rev_string(va_list ap)
{
	return (_rev_string(va_arg(ap, char *)));
}
