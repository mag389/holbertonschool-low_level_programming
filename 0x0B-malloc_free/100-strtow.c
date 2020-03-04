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
	int i, j, k, len = 0, wordlength, wordcount = 0;
	char **words;

	if (str == NULL)
		return (NULL);
	while (str[len] != 0)
		len++;
	if (len == 0)
		return (NULL);
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
	words = malloc(wordcount * sizeof(char *) + 1);
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < len;)
	{
		if (str[i] == ' ')
			i++;
		else
		{
			wordlength = tospace(&str[i]);
			words[j] = malloc(wordlength * sizeof(char) + 1);
			if (words[j] == NULL)
				return (NULL);
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

	while (str[i] != ' ' && str[i] != '0')
		i++;
	return (i);
}
