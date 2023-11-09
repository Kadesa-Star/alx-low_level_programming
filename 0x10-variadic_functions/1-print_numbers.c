#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n:number of integers passed to the function
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list number;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));
		if (i != (n - 1) && separator != NULL)
			printf("%d", separator);
	}
	printf("\n");
	return (number);
}
