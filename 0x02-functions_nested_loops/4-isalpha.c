#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @i: the character to be checked
 * Return: 1 if i is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}

