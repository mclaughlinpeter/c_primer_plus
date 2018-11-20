#include <stdio.h>

#define SIZE 8

int main(void)
{
	double inputs[SIZE];
	double totals[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		printf("Enter double #%d: ", i+1);
		while (scanf("%lf", &inputs[i]) != 1)
		{
			while (getchar() != '\n');
			printf("Re-enter value: ");
		}
		while (getchar() != '\n');
		totals[i] = inputs[i] + ((i > 0) ? totals[i-1] : 0);
	}

	printf("Values entered:\t");
	for (int i = 0; i < SIZE; ++i)
		printf("%5.2f ", inputs[i]);
	printf("\n");
	printf("Totals:\t\t");
	for (int i = 0; i < SIZE; ++i)
		printf("%5.2f ", totals[i]);
	printf("\n");

	return 0;
}

