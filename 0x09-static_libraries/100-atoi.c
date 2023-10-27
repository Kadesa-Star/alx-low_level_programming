#include "main.h"
/**
 * _atoi - converts string to  an integer
 * @s: pointer to string
 * Return: void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int number;
	char *tem;

	tem = s;
	number = 0;
	sign = 1;
	while (*tem != '\0' && (*tem < '0' || *tem > '9'))
	{
		if (*tem == '-')
			sign *= -1;
		tem++;
	}
	if (*tem != '\0')
	{
		do {
			number  = number * 10 + (*tem - '0');
			tem++;
		} while (*tem >= '0' && *tem <= '9');
	}
	return (number * sign);
}
