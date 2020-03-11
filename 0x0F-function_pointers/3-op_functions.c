#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*op_add - adds two ints
*Return: sum
*@a: first num
*@b: second num
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts two ints
*Return: difference
*@a: first num
*@b: second num
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - multiplies two ints
*Return: product
*@a: first num
*@b: second num
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - divides two ints
*Return: division
*@a: first num
*@b: second num
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - mod of two ints
*Return: mod
*@a: first num
*@b: second num
*/
int op_mod(int a, int b)
{
	return (a % b);
}
