#include <stdarg.h>
#include "main.h"

/**
 * _printf - print formatted text
 *
 * @format: - string containing text & formatting characters
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
const char *p;
unsigned int count = 0;
va_list ap;
va_start(ap, format);
for (p = format; *p != '\0'; p++)
{
if (*p != '%')
{
count += _putchar(*p);
continue;
}

if (*++p == 'c' || *p == 'b' || *p == 'u'
|| *p == 'i' || *p == 'd' || *p == 'x' || *p == 'X')
{
count += print_number_inv(va_arg(ap, int), *p);
}
else if (*p == 's' || *p == 'r' || *p == 'S' || *p == 'R')
{
count += print_custom_inv(va_arg(ap, char *), *p);
}
else
{
count += _putchar(*p);
}
}
va_end(ap);
return (count);
}
