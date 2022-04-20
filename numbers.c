#include "main.h"
/**
 * print_int - print integer
 *
 * @integer_value: - Integer to be printed
 *
 * Return: number of characters printed
 */
int print_int(int integer_value)
{
int count = 0;
if (integer_value < 0)
{
integer_value = -integer_value;
count += _putchar('-');
}
count += _puts(_convert(integer_value, 10, 0));
return (count);
}

/**
 * print_number_inv - combines number conversions
 * @integer_value: number value from _printf
 * @inversion: inversion from _printf
 * Return: length of the printed string
 */
int print_number_inv(int integer_value, char inversion)
{
int count = 0;
switch (inversion)
{
case 'c':
count += _putchar(integer_value);
break;
case 'b':
count += _puts(_convert(integer_value, 2, 0));
break;
case 'u':
count += _puts(_convert(integer_value, 10, 0));
break;
case 'i':
case 'd':
count += print_int(integer_value);
break;
case 'o':
count += _puts(_convert(integer_value, 8, 1));
break;
case 'x':
count += _puts(_convert(integer_value, 16, 1));
break;
case 'X':
count += _puts(_convert(integer_value, 16, 0));
default:
count += _putchar(integer_value);
}
return (count);
}
