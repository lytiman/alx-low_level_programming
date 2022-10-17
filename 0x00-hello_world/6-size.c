#include <stdio.h>
/**
 * main -print size of different type
 *
 * Return:0
*/

int main(void)
{ 
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char\n",sizeof(a));
        printf("size of int \n",sizeof(b));
        printf("size oflong int \n",sizeof(c));
        printf("size of long long int \n",sizeof(d));
        printf("size of float \n",sizeof(f));
        return (0);
}	
