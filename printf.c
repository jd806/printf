#include <stdarg.h>
#include "main.h"

/**
 * printf - print formatted text
 *
 * @format: - string containing text & formatting characters
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
const char *p;
char *string_value;
int integer_value;
unsigned int count = 0;

// Pick up _printf arguments
va_list ap;
va_start(ap, format);

// Process Characters
for (p = format; *p != '\0'; p++)
{

if (*p != '%')
{
count += _putchar(*p);
continue;
}

switch (*++p)
{
case 'c':
integer_value = va_arg(ap, int);
count += _putchar(integer_value);
break;
case 's':
for (string_value = va_arg(ap, char *); *string_value; string_value++)
    count += _putchar(*string_value);
break;
case '%':
count += _putchar('%');
break;
default:
count += _putchar(*p);
}
}

va_end(ap);
// +2 to cover closing characters \0
return count + 2;
}
