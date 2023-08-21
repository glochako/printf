#include "main.h"

int _printf(const char *format, ...)
{
	int print_chars = 0;/* prints the number of characters */
	va_list args_of_list;

	if (format == NULL)
		return (-1);

	va_start(args_of_list, format);
	while (*format)
	{
	if (*format != '%')
	{
		write(1, format, 1);
		print_chars++;
	}
	else
	{
		format++;
		if (*format == '\0')/* checks for the end of a string */
			break;
		if (*format == '%')
		{
			write(1, format, 1);
			print_chars++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args_of_list, int);

			write(1, &c, 1);
			print_chars++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args_of_list, char*);
			int length = 0;
		while (str[length] != '\0')
			length++;
		write(1, str, length);
		print_chars += length;
		}
	}
	format++;
	}

	va_end(args_of_list);
	return (print_chars);
}

int main(void)
{
	_printf("Today is\n");
	_printf("%c\n", 'a');
	_printf("%s\n", "Monday evening");
	_printf("%%\n");
	return (0);
}
