#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - splits  a string into words
 * @ac: argument count
 * @av: argument vector
 * Description: afunction that concatenates all the arguments of your program
 * Return: Pointer to a new string or NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char *temp;
	int a, b, c = 0;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		length++;
	}
	length += ac;

	temp = malloc(sizeof(char) * length + 1);
	if (temp == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			temp[c] = av[a][b];
			c++;
		}
		if (temp[c] == '\0')
		{
			temp[c++] = '\n';
		}
	}
	return (temp);
}


