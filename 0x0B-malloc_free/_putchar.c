#include "main.h"
#include <unistd.h>
/**
 * _putchar - write thecharacter c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On eror, -1 is returned, and errno is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
