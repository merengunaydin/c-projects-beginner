#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int bookPrice, order, totalPrice;

	printf("Please enter that how much you want the book: ");
	scanf("%d", &order);
	
	bookPrice = 20;

	if (order <= 5)
	{
		totalPrice = bookPrice * order;
	}
	else if (order <= 10)
	{
		totalPrice = bookPrice * order * 0.80;
	}
	else if (order <= 15)
	{
		totalPrice = bookPrice * order * 0.70;
	}
	else
	{
		totalPrice = bookPrice * order * 0.60;
	}

	printf("\nYour cost is: %d\n\n", totalPrice);

	return 0;
}