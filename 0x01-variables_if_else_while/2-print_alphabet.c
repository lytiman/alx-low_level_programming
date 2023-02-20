#include <stdio.h>
/**
 *main - print alpha in lowercase
 *Return: always 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		putchar(ls);
	}
	putchar ('\n');
	return (0);
}
