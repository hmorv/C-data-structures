#include <stdio.h>


/*
A data structure contains multiple pieces of data. Each piece of data (called a "member")
can be accessed by the name of the variable, followed by a '.' then the name of the member.
Another way for accessing it iss using the member operator '->'

*/
int main()
{
	struct mystruct {
		int int_member;
		double double_member;
		char string_member[25];
	} Variable;
}

// variable is an instance of mystruct. It can be mottied from the end of the struct like this:

struct mystruct variable;

//more info at https://www.tutorialspoint.com/cprogramming/c_structures.htm

//It is often common practice to make a type synonym so we don't have to type "struct mystruct" all the time:

typedef struct {
	int int_member;
	double double_member;
	char string_member[25];
} Mystruct;

//Unions
// The difference between union and struct is that the members occupy the same area of memory

union {
	int i;
	double d;
} u;

// Since u.i and u.d occupy the same area of memory, modifying one modifies the value of the other.