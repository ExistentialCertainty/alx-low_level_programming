#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - a functions that computes the sum of two int
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a functions that computes the difference of two int
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a functions that computes the products of two int
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a functions that divides an int with another int
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: result of division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a functions that divides an int  with another  int
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
