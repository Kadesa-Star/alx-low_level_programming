#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @w: the letter to be checked
 * Return: 1 for upper 0r 0 otherwise
 */
int _isupper(int w)
{
	if (w >= 65 && w <= 90)
	{
		return (1);
	}
	return (0);
}
