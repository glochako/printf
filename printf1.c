#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);

    int count = 0;
    while (*format != "\0"){
    
    if (*format == '%'){
        format ++;

        if(*format == 'd' || *format == 'i')
        { int num = va_arg(args, int);
        







        }

    
    
     


    va_arg
    }
    va_end
}
