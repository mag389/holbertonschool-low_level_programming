#include "holberton.h"
#include <stdio.h>

/**
*rev_string - reverses string
*
*Description:takes a string. reverses it
*Return:void
*@s:given string
*/
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
//	char temp1[len];
	char temp2[len];

	printf("%s\n",temp2);	
	for (i = len - 1; i >= 0; i--)
	{
		printf("iteration number %i\n",i);
		printf("current temp2 %c\n",temp2[i]);
		printf("current s %c\n",s[i]);
		temp2[len - i - 1] = s[i];
		printf("updated temp2 %s\n",temp2);
	}
//	s = temp2;
	for (i = 0; i < len; i++)
		s[i] = temp2[i];
	printf("%s\n",temp2);
	printf("%s\n", s);
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
