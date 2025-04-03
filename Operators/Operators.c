#include <stdio.h>

int main()
{
	int x, y;

	x = 7;
	y = 2;

	/* Comparison Operators */
	printf("result x=y: %d\n", x == y);		//0		
	printf("result x!=y: %d\n", x != y);	//1
	printf("result x<y: %d\n", x < y);		//0
	printf("result x>y: %d\n", x > y);		//1
	printf("result x<=y: %d\n", x <= y);	//0
	printf("result x>=y: %d\n\n", x >= y);	//1


	/* Logical Operators */
	printf("result: %d\n", x > y && x > 5);		//1
	printf("result: %d\n", x == y && x > 5);	//0
	printf("result: %d\n", x > y || x > 5);		//1
	printf("result: %d\n", x == y || x > 5);	//1
	printf("result: %d\n", !(x > y || x > 5));	//0
	printf("result: %d\n", !(x == y || x > 5));	//0

	printf("\n\n");
	return 0;
}