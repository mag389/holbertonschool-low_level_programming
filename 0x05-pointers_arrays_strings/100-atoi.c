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
/*	int len = _strlen(s); */
	int numstart = 0, numend, finalnum = 0;
	int  i, m = 1, sign = 1;
/*
*	printf("int %i",  '1'-48);
*	printf("int or char %d", '1' - 48);
*	printf("the 0th value of string%c\n" , s[numstart] - 48);
*	printf("true alse num %i\n", s[numstart] < '0');
*/
	while (s[numstart] < '0' || s[numstart] > '9')
	{
		numstart++;
/*
*		printf("the digit is  %i,  ",s[numstart] - 48);
*		printf("index %i\n", numstart);
*/
	}
/*
*	printf("numstart: %i  ", numstart);
*/
	numend = numstart;
	while (s[numend] >= '0' && s[numend])
		numend++;
/*
*	printf("numend: %i\n",numend);
*
*	m = 1;
*/
	sign = negafy(s, numstart);
	for (i = 1; i <=  numend - numstart; i++)
		{
/*
*		printf("maybe digit: %i", s[numstart + i] - 48);
*		printf("perhaps %i \n", s[numend - i] -48);
*/
		finalnum += (s[numend - i] - 48) * m * sign;
		m *= 10;
		}
/*
*	if (numstart != 0)
*		finalnum = negafy(finalnum, s, numstart);
*
*	{
*		if (s[numstart - 1] == '-')
*			finalnum = finalnum * -1;
*	}
*/
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
	int sign = 0;

	for (i = 0; i < numstart; i++)
	{
		if (s[i] == '-')
			sign = sign -1;

		if (s[i] == '+')
			sign++;

	}

	if (sign < 0)
		sign = -1;
	else
		sign = 1;
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
