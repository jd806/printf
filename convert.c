/**
 * _convert - change num to any base
 *
 * @num: - number value
 * @base: - The base to be converted to
 * @lowercase: - If lettered bases should be uppercase or lowercase.
 *
 * Return: number of characters printed
 */
char *_convert(unsigned int num, int base, int lowercase)
{
static char *Representation;
static char buffer[50];
char *ptr;

Representation = lowercase ? "0123456789abcdef" : "0123456789ABCDEF";

ptr = &buffer[49];
*ptr = '\0';

do {
*--ptr = Representation[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
