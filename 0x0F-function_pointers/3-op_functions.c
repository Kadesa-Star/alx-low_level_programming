#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiiplies
 * @a: integer 1
 * @b: integer 2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides
 * @a: first integer
 * @b: second integer
 * Return: function that divides
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the modulus
 * @a: first integer
 * @b: second integer
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}

