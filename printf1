#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    
    if (format == NULL)/* inidcates there is no integer to be printed*/
    return (-1);

    va_start(args, format);
    
    while (*format)
    {
        if (*format != '%')/* no special identifier so *format should be printed as is*/
        {
            write(1, format, 1)
            count++;
        }
        else
        {
            format++;/* skip the % to the next character*/
            if (*format == '\0') /* indicates the end of the string*/
            break;
        }
        else if (*format == '%')/*indicates presence of an integer*/
        {
            if(*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);/* print the number according to the list of args*/
                if (num < 0)
                {
                    write (1, "-", 1)
                    num = -num;
                    count++;
                }
                else if (num == 0)
                {
                    write (1,"0", 1)
                    count++;
                }
                else
            {
            char numStr[20];
            int len = 0;
            
            while (num > 0) {
            
                numStr[len++] = '0' + num % 10;
                num /= 10;

            
            }
            
        







        }

    
    
     


    va_arg
    }
    va_end
}
