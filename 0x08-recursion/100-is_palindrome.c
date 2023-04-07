#include "main.h"
/**
 * get_length - size
 * @s: pointer to string prmtr
 * Return: length
 */

int get_length(char *s)
{
	if (!*s)
	{
		return (0);
	}
    return (1 + get_length(s++));
}

/**
 * is_palindrome_helper - palindrome helper
 * @s: pointer to string prmtr
 * @start: position prmtr
 * @end: position prmtr
 * Return: recursion
 */
int is_palindrome_helper(char *s, int end) 
{
	if (end < 1) 
	{
		return (1);
	}

	if (*s != s[end]) 
	{
		return 0;
	}
	return (is_palindrome_helper(s + 1, end - 2));
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string prmtr
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = get_length(s);

	return (is_palindrome_helper(s, len - 1));
}
