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

    va_list ap;
    va_start(ap, format);

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
            string_value = va_arg(ap, char *);
            count += _puts(string_value);
            break;
        case '%':
            count += _putchar('%');
            break;
        case 'b':
            integer_value = va_arg(ap, int);
            count += _puts(_convert(integer_value, 2));
            break;
        case 'd':
            integer_value = va_arg(ap, int);
            if (integer_value < 0)
            {
                integer_value = -integer_value;
                putchar('-');
            }
            _puts(convert(integer_value, 10));
            break;

        case 'u':
            integer_value = va_arg(ap, int);
            count += _puts(_convert(integer_value, 10));
            break;
        case 'o':
            integer_value = va_arg(ap, int);
            count += _puts(_convert(integer_value, 8));
            break;
        case 'x':
            // TODO - Convert to lowercase
            integer_value = va_arg(ap, int);
            count += _puts(_convert(integer_value, 16));
            break;
        case 'X':
            integer_value = va_arg(ap, int);
            count += _puts(_convert(integer_value, 16));
            break;
        case 'r':
            string_value = va_arg(ap, char *);
            count += _puts(_string_reverse(string_value));
            break;
        default:
            count += _putchar(*p);
        }
    }

    va_end(ap);

    return count;
}
