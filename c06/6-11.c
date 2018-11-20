#include <stdio.h>

#define SIZE 8

int main(void)
{
	int myArray[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		printf("Enter an integer: ");
		while (scanf("%d", &myArray[i]) != 1)
		{
			while (getchar() != '\n');
			printf("Re-enter integer: ");
		}
		while (getchar() != '\n');
	}
	for (int i = SIZE-1; i >= 0; --i)
		printf("%d ", myArray[i]);
	printf("\n");
	return 0;
}
