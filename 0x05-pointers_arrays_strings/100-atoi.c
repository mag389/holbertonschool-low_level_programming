#include "holberton.h"
#include <stdio.h>
#include <math.h>
int negafy(char *s, int numstart);

/**
*_atoi - returns int from string
*
*Description:takes a string arg, returns contained string
*Return:the int value
*@s:given string
*/
int _atoi(char *s)
{
	int numstart = 0, numend, finalnum = 0;
	int  i, m = 1, sign = 1;

	while ((s[numstart] < '0' || s[numstart] > '9') && numstart < _strlen(s) - 1)
	{
		numstart++;
	}
	if (numstart == _strlen(s) - 1)
		return (0);
	numend = numstart;
	while (s[numend] >= '0' && s[numend])
		numend++;
	sign = negafy(s, numstart);
	for (i = 1; i <=  numend - numstart; i++)
		{
		finalnum += (s[numend - i] - 48) * m * sign;
		m *= 10;
		}
	return (finalnum);
}

/**
*negafy - decides if num should be negative
*Description: if it should be neg, multiplies by -1
*Return: void
*
*@s: the string
*@numstart: index where the number starts
*/
int negafy(char *s, int numstart)
{
	int i;
	int sign = 1;

	for (i = 0; i < numstart; i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}
	return (sign);
}

/**
*_strlen - gives length of a given string
*
*Description:takes a pointer to a char and returns length
*Return:the length of a string
*@s:given integer variable 1
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		{
		len++;
		}
	return (len);
}
