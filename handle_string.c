#include "main.h"

/**
 * handle_string - funtion that check if is string
 * @ap: list
 * Return: length of string
 */
int handle_string(va_list ap)
{
	char *str;
	int len = 0;

	str = va_arg(ap, char*);
	if ((unsigned long)ap <= (unsigned long)str)
		return (-1);
	str = str == NULL ? "(null)" : str;
	while (*(str + len) != '\0')
		len++;
	return (write(1, str, len));
}
