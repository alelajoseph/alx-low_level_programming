#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;
	i = 0;

	while (i++ <=9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
