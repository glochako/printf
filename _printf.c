#include "main.h"

int _printf(const char *format, ...)
{
	int print_chars = 0;

	va_list args_of_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_of_list, format);

	while (*format)
