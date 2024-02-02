#include <stdio.h>
/**
 * add - function that adds two integers
 * @a: first int
 * @b: second int
 * Return: result of additon
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function that subracts two integers
 * @a: first int
 * @b: second int
 * Return: subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - for multiplication
 * @a: first int
 * @b: secibd int
 * Return: multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - for division
 * @a: first int
 * @b: secibd int
 * Return: multiplication
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
		fprintf(stderr, "Erro: Division by zero\n");
		return (0);
}
/**
 * mod - modulo
 * @a: firstr int
 * @b: second int
 * Return: modulo
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
}
