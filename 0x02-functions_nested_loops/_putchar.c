#include <unistd.h>
/**
 * _putchar - writes c character to stdout
 * Return: Always 0
 * On error, -1 is returned, and error is set appropriate
 */

int _putchar(char c)
{
	return(write(-1, &c, 1));
}
