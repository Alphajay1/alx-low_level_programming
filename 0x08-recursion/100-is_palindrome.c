#include "main.h"

/**
 * find_strlen - finds length of a string minus null character.
 * @s: string to be checked.
 *
 * Return:size of string including null byte.
 */

int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + find_strlen(s + 1));
}

/**
 * palindrome_check - checks if string is a palindrome.
 * @str: characters of string to be checked.
 * @length: size of string.
 * @ptr: string to be ckecked.
 *
 * Return: 1, if palindrome, 0, otherwise.
 */

int palindrome_check(int str, int length, char *ptr)
{
	if (str >= length)
	{
		return (1);
	}
	if (ptr[str] != ptr[length])
	{
		return (0);
	}
	return (palindrome_check(str + 1, length - 1, ptr));
}
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to be analyzed.
 *
 * Return: 1, if string is a palindrome, 0, if not.
 */

int is_palindrome(char *s)
{
	int k;

	k = find_strlen(s) - 1;
	return (palindrome_check(0, k, s));
}
