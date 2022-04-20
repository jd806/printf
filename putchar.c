#include <unistd.h>

/**
* _putchar - print single character
*
* @c: - Character to be printed to stdout
*
* Return: number of bytes written
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
