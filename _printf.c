#include "main.h"

int _printf(const char *format, ...)
{
	int print_chars = 0;

	va_list args_of_list;

	if (*format == NULL)
	{
		return (-1);
	}

	va_start(args_of_list, format);

	while (*format){

	if (*format != '%') {
	write(1, format, 1);
	print_chars++;

	}

	else 
	{
		format++;

	if (*format == '\0')
	break;
	

	if (*format == '%') {
	write(1, format, 1);
	print_chars++;
	}

	else if (*format == 'c') {
		char c = va_arg(args_of_list, int);
	write(1, &c, 1);
	print_chars++;
	}

	else if (*format == 's'){
		
	}
		
	}
}

