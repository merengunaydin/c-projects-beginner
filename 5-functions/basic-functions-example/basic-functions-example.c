#include <stdio.h>

void greet(char name[]);
void printAge(int age);
int sum(int x, int y);

int main()
{
	int result = sum(6, 12);
	printf("Sum result: %d\n", result);

	greet("Alice");
	printAge(25);

	return 0;
}

int sum(int x, int y)
{
	return x + y;
}

void greet(char name[])
{
	printf("Hello %s!\n", name);
}

void printAge(int age)
{
	printf("Age: %d\n", age);
}
