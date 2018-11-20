#include <stdio.h>

#define SIZE 8

int intPower(int base, int power);

int main(void)
{
	int array[SIZE];
	for (int i = 0; i < SIZE; ++i)
		array[i] = intPower(2, i);

	for (int i = 0; i < SIZE; ++i)
		printf("%d ", array[i]);

	printf("\n");

	return 0;
}

int intPower(int base, int power)
{
	int sum = 1;
	for (int n = 0; n < power; ++n)
		sum *= base;
	return sum;
}
