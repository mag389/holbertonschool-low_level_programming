#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
/* from 0x02 */
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
/* from 0x04*/
int _isupper(int c);
int _isdigit(int c);
/* from 0x05*/
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
/* from 0x06*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
/* from 0x07*/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);


#endif
