#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = 0;
	
	if (*s == '\0')
	return (1);

	while (s[length] != '\0')
	length++;

	return (check_palindrome(s, 0, length - 1));
}


/**
 * check_palindrome - Help function
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (s[start] == s[end])
	return (check_palindrome(s, start + 1, end - 1));
	
	else
	return (0);
	
}
