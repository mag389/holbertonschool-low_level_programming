#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int tospace(char *str);
/**
*strtow - splits strings into words
*Return: pointer to an arr of strings
*@str: the long string of words connected with spaces
*/
char **strtow(char *str)
{
	int i, j, k, len = 0, nonspaces, wordlength, wordcount;
	char **words;

	while (str[len] != 0)
		{
		if (str[len] != ' ')
			nonspaces++;
		len++;
		}

	i = 0;
	while (i < len)
	{
		if (str[i] == ' ')
			i++;
		else
		{
			wordlength = tospace(&str[i]);
			wordcount++;
			i += wordlength;
		}
	}
	words = malloc(wordcount * sizeof(char *));
	for (i = 0, j = 0; i < len;)
	{
		if (str[i] == ' ')
			i++;
		else
		{
			wordlength = tospace(&str[i]);
			words[j] = malloc(wordlength * sizeof(char));
			for (k = 0; k < wordlength; k++)
			{
				words[j][k] = str[i + k];
			}
			j++;
			i += wordlength;
		}
	}
	return (words);
}
/**
*tospace - finds length to next space
*Return: number of spaces
*@str:address of string being pointed to
*/
int tospace(char *str)
{
	int i = 0;

	while (str[i] != ' ')
		i++;
	return (i);
}
