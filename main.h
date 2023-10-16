#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_percent(va_list val);

#endif
