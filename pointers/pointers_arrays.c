#include <stdio.h>
int main()
{
	return 0;
}

//we are going to traverse the array using a pointer
int withArrays()
{
	int array[10] = {0,2,3,5,5,6,7,8,9,0};

	int *pointer = &array[0];	//assign start memory address array to pointer

	int i;

	for (i=0; i<10; i++) {
		printf("%d\n", *(pointer+i));
	}
	
}

/*
we can achieve what *(pointer+1) does by doing one of these:
	-	array[i]
	-	*(array+i)
	-	pointer[i]
*/

