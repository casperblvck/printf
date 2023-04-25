#include "main.h"

/**
 * print_o - is a function that converts an integer to its octal representation
 * @arguments: is the list of arguments that will be used in the printf fnx.
 * Return: count
 */
int print_o(va_list arguments)
{
	static const char octal[] = "01234567";
	static char buffer[1024];

	int count = 0;
	char *ptr = &buffer[1023];

	*ptr = '\0';
	unsigned int a = va_arg(arguments, unsigned int)

	do {
		*--ptr = octal[a % 8];
	} while (a != 0);

	while (*ptr != '\0')

	{
		count = count + write(1, ptr, 1);
		ptr++;
	}
	return (count);
}
