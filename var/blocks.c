#include <stdio.h>

/************************************************************************************
 * Function: int main(void)
 * Input   : none
 * Output  : Returns 0 on success
 * Procedure: Prints 'i' value in global and local scope.
 ************************************************************************************/
int main()
{
	int i = 1;

	{
		int i = -1;
		printf("%d\n", i);	//prints '-1'
	}
	printf("%d\n", i); //prints '1'

	return 0;
}