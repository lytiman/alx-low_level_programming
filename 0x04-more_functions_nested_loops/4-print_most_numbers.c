#include "main.h"
/**
 * print_most_numbers - print numbers between 0 and 9 except and 4
 *
 * Return: void
 */

void print_most_numbers(void);
{
	char c;

	for (c = 0 ; c <= 9 ; c++)
	{
		if (!(c == 0 || c == '4'))
			_putchar(c);
	}
	_putchar('/n');
}
