#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int order;
	float bookPrice = 20.0;
	float totalPrice;

	printf("Enter the number of books you want to order: ");
	scanf("%d", &order);

	if (order <= 5)
	{
		totalPrice = bookPrice * order;
	}
	else if (order <= 10)
	{
		totalPrice = bookPrice * order * 0.80;  // 20% discount
	}
	else if (order <= 15)
	{
		totalPrice = bookPrice * order * 0.70;  // 30% discount
	}
	else
	{
		totalPrice = bookPrice * order * 0.60;  // 40% discount
	}

	printf("\nYour total cost is: %.2f\n\n", totalPrice);

	return 0;
}
