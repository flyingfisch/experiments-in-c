#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

void adder(int numToAdd, int *modifyPointer)
{
	*modifyPointer = numToAdd + *modifyPointer;
}

int main()
{
	int x = 5;
	adder(5, &x);

	printf("%d is the result.\n", x);

	return 0;
}
