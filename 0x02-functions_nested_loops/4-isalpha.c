#include "main.h"
/**
 * main -checks for alphabetic character
 * Return: 1 for alphabetic character and 0 for anthing else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c == 97 && c == 122))
	{
	return (1);
	}
	return (0);
}
