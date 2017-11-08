#include <stdio.h>

int main()
{
	int x[10], b, *pa, *pb;

	x[5]=10;
	pa=&x[5];

	b = *pa+1;	//equals b=x[5]+1 (11)

	b = *(pa+1);	//equals b=x[6];

	pb = &x[10];	//assign x[10] mem address to pb

	*pb = 0;	//pointer's value is now 10 i.e. x[10]=0

	*pb += 2;	//pointer's vlue incremented by 2 x[10]+=2;

	(*pb)--;	//pointer's value is decremented one time

	x[0] = *pb--;	//x[0] get x[10] value and then pb pointer is decremented to x[9]


}