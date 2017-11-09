#include <stdio.h>

int main()
{
	int i = 0;
	char char1 = 'c';
	char char2 = 97; //'a' in ASCII
	float pi = 3.1415927;
	double avogadro = 6.022140857e+23f;

	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of float: %lu\n", sizeof(float));
	printf("Size of double: %lu\n", sizeof(double));

}