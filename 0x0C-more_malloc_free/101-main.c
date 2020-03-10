#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>
void *mini_calloc(unsigned int nmemb, unsigned int size);
void *mul_powten(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *s);
char *big_add(char *n1, char *n2);
int getmax(int n1, int n2);
char *small_mul(char *s, int n);
char *big_mul(char *n1, char *n2);
/*
*the tester file for my infinte_multiple f'ns
*
*
*
*/
int main(int argc, char *argv[])
{
	char *num1 = "1234";
	char *num2 = "9876";
/*	char *num3 = "28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708";*/
	char *a, *b;
	int i;
	char *newnum = malloc(4);

	free(newnum);
	(void) argc;
	printf("%li %li\n",sizeof(*num1),sizeof("1234"));
	a = mini_calloc(7,sizeof(char));
	for (i = 0; i < 4; i++)
		a[i] = num1[i];
	printf("a is %s\n",a);
	free(a);
	b = mul_powten(num2,4,7);
	free(b);
/*	printf("b= %s lenb= %i\n",b, _strlen(b));
        b = mul_powten(num2,0,1);
        printf("b= %s lenb= %i\n",b, _strlen(b));
        b = mul_powten(num2,9,3);
        printf("b= %s lenb= %i\n",b, _strlen(b));
	printf("max of 72 and 88 is %i\n", getmax(72,88));
	printf("1234 + 1234 = 2468 =%s\n",big_add(num1,num1));
        printf("9876 + 9876 = 19752 =%s\n",big_add(num2,num2));
	printf("9999 + 9999 = 19998 = %s\n",big_add("9999","9999"));
	printf("987654 + 123456 = 1111110 = %s\n",big_add("987654","123456"));
	printf("1234 * 4 = 4936 = %s\n",small_mul("1234",4));
	printf("91234567890 * 9 = 821111111010 = %s\n",small_mul("91234567890",9));
	printf("137174 * 9 = 1234566 = %s\n", small_mul("137174",9));
	printf("10 * 9 = 90 = %s\n", big_mul("10","9"));
	printf("1234 * 1234 = 1522756 = %s\n", big_mul("1234","1234"));*/
	/*printf("n1 + n2 = %s\n",big_mul("235234693269436436223446526546334576437634765378653875874687649698659586695898579",num3));*/
	printf("%s\n",big_mul(argv[1],argv[2]));
	return (0);
}
/**
*big_mul - multiplies two large numbers together( as char *)
*Return: a pointer pointing to the large number or NULL on failure
*@n1:first num
*@n2: second number
*/
char *big_mul(char *n1, char *n2)
{
	char *product;
/*	char *temp;*/
	int len1, len2, i;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
/*	printf("%i %i\n",len1, len2);
*/	product = malloc(sizeof(char) * len1);
	if (product == NULL)
		return (NULL);
	for (i=0; i < len1; i++)
		product[i] = '0';
	for (i = 0; i < len2; i++)
	{
/*		printf("i is %i len1 is %i len2 is %i\n",i, len1,len2);
		printf("product is %s\n",product);*/
/*		temp = big_add(product, mul_powten(small_mul(n1, n2[len2 - 1 - i] -48),1, i));
		free(product);
		product = malloc(sizeof(temp));
		for (j = 0; j < _strlen(temp); j++)
			product[j] = temp[j];
		product[j] = '\0';
		free(temp);*/
/*this line was the original only on in the loop*/
		product = big_add(product, mul_powten(small_mul(n1, n2[len2 - 1 - i] - 48),1, i));
/*		printf("product is %s\n", product);*/
	}
/*	free(n1);
	free(n2);
*/	return (product);
}


/**
*mini_calloc - allocates memorey for an array
*Return: pointer to allocated memory
*@nmemb: number of items in array
*@size: size of single element
*/
void *mini_calloc(unsigned int nmemb, unsigned int size)
{
	char *thearray;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	thearray = malloc(nmemb * size);
	if (thearray == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		thearray[i] = '0';
	return ((void *)thearray);
}

/**
*mul_powten - multiplies string number by power of ten
*Return: new memory block of char number or null
*@ptr: pointer to prev allocated memory
*@old_size: the size of old ptr
*@new_size: size of new memory block
*/
void *mul_powten(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i, len;
	char *chptr = (char *)ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= 0)
		return (ptr);
	len = _strlen(ptr);
	newptr = malloc(len + new_size);
	if (newptr == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < len; i++)
		newptr[i] = chptr[i];
	for (; i < len + new_size;i++)
		newptr[i] = '0';
	newptr[i] = '\0';
/*	free(ptr);i*/
	(void) old_size;
	return (newptr);
}
/**
*/
int getmax(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}
/**
*big_add - adding two numbers as string chars
*Return: sum of two numbers as char
*@n1: the first num
*@n2: the second num
*/
char *big_add(char *n1, char *n2)
{
	int len1, len2, i, maxlen,leadzero = 0;
	int smallsum, remainder = 0, d1, d2;
	char *newnum;
	char *returnnum;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	maxlen = getmax(len1, len2);
	newnum = mini_calloc(maxlen + 1, sizeof(char));
	for (i = 0; i < maxlen + 1; i++)
		{
		if (i + 1 <= len1)
			d1 = n1[len1 - i - 1] - 48;
		else
			d1 = 0;
		if (i + 1 <= len2)
			d2 = n2[len2 - i - 1] - 48;
		else
			d2 = 0;
		smallsum = d1 + d2 + remainder;
		newnum[maxlen + 1 - i] = smallsum % 10 + 48;
		remainder = smallsum / 10;
		}
	if (newnum[1] == '0')
		leadzero = 1;
	returnnum = malloc(sizeof(char) * _strlen(newnum) - leadzero - 1);
	for (i = 0; i < _strlen(newnum) - leadzero - 1; i++)
		returnnum[i] = newnum[leadzero + i + 1];
	free(newnum);
	return (returnnum);
}
/**
*small_mul - multiply array by single digit number
*Return: the new array that's multiplied by the n
*@s:the string of numbers to multiply
*@i:the number to multiply
*/
char *small_mul(char *s, int n)
{
	int len, i, leadzero = 1;
	int smallproduct, carryover = 0,d1;
	char *newnum;
	char *returnnum;
	
	len = _strlen(s);
	
	newnum = mini_calloc(len + 1,sizeof(char));
	if (newnum == NULL)
		return (NULL);
	for (i = 0; i < len + 1; i++)
		{
		if (i + 1 <= len)
			d1 = s[len - 1 - i] - 48;
		else
			d1 = 0;
		smallproduct = d1 * n + carryover;
		newnum[len + 1 - i] = smallproduct % 10 + 48;
		carryover = smallproduct/ 10;
		}
	if (newnum[1] == '0')
		leadzero = 2;
	returnnum = malloc(sizeof(char) * _strlen(newnum) - leadzero);
	for (i = 0; i < _strlen(newnum) - leadzero; i++)
		returnnum[i] = newnum[leadzero + i];
	free(newnum);
	return (returnnum);
}

/**
*_strlen - returns length of string including null byte
*Return: int value of length
*@s: the string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
