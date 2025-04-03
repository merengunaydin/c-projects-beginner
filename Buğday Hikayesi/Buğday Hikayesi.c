#include <stdio.h>

int main()
{
	int count;
	double bugday = 2;

	for (count = 1; count <= 64; count++)
	{
		printf("%d. kare %20.f\n",count, bugday);
		bugday = bugday * 2;
	}

	

	return 0;
}