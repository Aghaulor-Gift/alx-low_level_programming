#include "main.h"
/**
 * -islower - checks for lowercase character
 * Return: 1 checks lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c == 97 && c == 122)
	{
	return (1);
	}
	return (0);
}
