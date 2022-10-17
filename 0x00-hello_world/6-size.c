#include <stdio.h>
/**
 * main -print the sizes
 *mines
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char:%lu byte(s)", (unsigned  long)sizeof(a));
	printf("size of a int:%lu byte(s)\n", (usigned long)sizeof(b));
	printf("size of a long int:%lu byte(s)\n", (usigned long)sizeof(c));
	printf("size of a long long int:%lu byte(s)\n", (usigned long)sizeof(d));
	printf("size of a float:%lu byte(s)\n", (usigned long)sizeof(f));

	return (0);
}
