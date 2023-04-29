#include "main.h"

/**
 * rot13 - function that check encodes a string.
 * @s: output string
 * Return: length of string
 */
int rot13(char *s)
{
	int j;
	char *data1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *data2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (*s == '\0' || s == NULL)
		return (0);
	for (j = 0; data1[j] != '\0'; j++)
	{
		if (*s == data1[j])
			return (write(1, data2 + j, 1) + rot13(s + 1));
	}
	return (write(1, s, 1) + rot13(s + 1));
}
/**
 * handle_rot13 - function that check encodes a string
 * @ap: list
 * Return: length of string
 */
int handle_rot13(va_list ap)
{
	return (rot13(va_arg(ap, char *)));
}
