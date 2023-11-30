#include "main.h"
/**
 * _islower - checks if a character is alphabetic
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, lowercase; 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
