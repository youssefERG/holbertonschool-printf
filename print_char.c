#include "main.h"

/**
 * print_char - prints a single character (specifier %c)
 * @ap: va_list containing the char (promoted to int)
 *
 * Return: number of bytes printed (1) or -1 on error
 */
int print_char(va_list ap)
{
	char c = (char)va_arg(ap, int);

	return (_putchar(c));
}
/* ik i made it clear that i hate C logic..........but i still have to say I HATE C LOGIC
