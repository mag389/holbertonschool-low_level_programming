#include <stdio.h>
#include "holberton.h"
int tinypalin(char *s, int len);

/**
*is_palindrome - tells if a string is palindromic
*Return: 1 if palindrom 0 else
*@s: string to test
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (tinypalin(s, len));
}

/**
*tinypalin - palindrome rcursive with extra var
*Return: 1 if palindrome else 0
*@s:string or partial to test for palin
*@len:the length to check
*/
int tinypalin(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);
	else
		return (s[0] == s[len - 1] * tinypalin(&s[1], len - 2));
}

/**
*_strlen_recursion - recursively finds length of a string
*Return: the length of the string
*@s: the string in question
*/

int _strlen_recursion(char *s)
{
	if (!s[0])
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
