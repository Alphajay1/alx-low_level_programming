#include "main.h"

/**
 * _str_len - finds the length of the string.
 * @s: string to be checked.
 *
 * Return: length of the string.
 */
int _str_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _str_len(s + 1));
}

/**
 * check_if_palindrome - checks if string is palindrome.
 * @start: start of index 0 of the string.
 * @end: end index of the string.
 * @str: string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int check_if_palindrome(int start, int end, char *str)
{
	if (start >= end)
		return (1);

	if (str[start] != str[end])
		return (0);

	return (check_if_palindrome(start + 1, end - 1, str));
}

/**
 * is_palindrome - checks if string is palindrome.
 * @s: string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len;

	len = _str_len(s) - 1;
	return (check_if_palindrome(0, len, s));
}
