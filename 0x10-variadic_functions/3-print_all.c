#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: is a list of types of args passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list anyt;
	int t;
	char *str, *sep;

	va_start(anyt, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sep, va_arg(anyt, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(anyt, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(anyt, double));
					break;
				case 's':
					str = va_arg(anyt, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					t++;
					continue;
				}
				sep = ",";
				t++;
		}
	}
	printf("\n");
	va_end(anyt);
}
