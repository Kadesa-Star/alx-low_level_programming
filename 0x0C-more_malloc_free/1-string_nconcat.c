#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a  funtion that concatenates two strings
 * @s1: string 1
 * @s2: second string
 * @n: integer value
 * Description: this is a funtion thstring_nconcatat concatenates two strings.
 * Return: NULL if function fails and the concatenated string otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *concst;
	unsigned int k;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (k = 0; s1[k] != '\0'; k++)
		lens1++;
	for (k = 0; s2[k] != '\0'; k++)
		lens2++;

	concst = malloc(sizeof(char) * (lens1 + n) + 1);
	if (concst == NULL)
		return (NULL);
	if (n >= lens2)
	{
		for (k = 0; s1[k] != '\0'; k++)
			concst[k] = s1[k];
		for (k = 0; s2[k] != '\0'; k++)
			concst[lens1 + k] = s2[k];
		concst[lens1 + k] = '\0';
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
			concst[k] = s1[k];
		for (k = 0; k < n; k++)
			concst[lens1 + k] = s2[k];
		concst[lens1 + n] = '\0';
	}
	return (concst);
}
