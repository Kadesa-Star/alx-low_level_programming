#include 'main.h'
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count = 0;

	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
