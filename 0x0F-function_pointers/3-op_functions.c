#include "function_pointers.h"
#include <stdio.h>

/* more headers goes there */

/**
 *op_add - a function
 *@a: in1
 *@b: in2
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - a function
 *@a: in1
 *@b: in2
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - a function
 *@a: in1
 *@b: in2
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - a function
 *@a: in1
 *@b: in2
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - a function
 *@a: in1
 *@b: in2
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
