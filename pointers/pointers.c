/*
A pointer is just a variable that contains another variable memory address.
Pointers can be used to refer and manipulate data structures. Many C functions use them:
	- scanf ("%c", &a); // scanf uses the memory address of a.
*/

#include <stdio.h>

int main()
{
	int a = 0;
	// pointer of type int declaration
	int *pointer;
	// a memory address assignation to pointer
	pointer = &a;

	printf("a: %d.\n*pointer: %d. \n",a, *pointer);
	printf("*pointer memory address: %p \n",pointer );
	return 0;
}	