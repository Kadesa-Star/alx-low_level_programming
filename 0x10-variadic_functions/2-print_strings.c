#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: is the string passed to the function
 * @n: number of strings passed to the functiion
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list strn;
	char *str;

	va_start(strn, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(strn, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (t != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strn);
}
