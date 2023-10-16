#include <stdio.h>
#include "main.h"

/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_of_args;
if (format == NULL)
{
return (-1);
}
va_start(list_of_args, format);
 while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_print++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
char_print++;
}
else if (*format == 'c')
{
char c = va_arg(list_of_args, int);
write(1, &c, 1);
char_print++;
}
else if (*format == 's')
{
char *str = va_arg(list_of_args, char*);
int str_ln = 0;
while (str[str_ln] != '\0')
str_ln++;
write(1, str, str_ln);
char_print += str_ln;
}
}
format++;
}
va_end(list_of_args);
return (char_print);
}
