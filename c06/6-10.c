#include <stdio.h>

int main(void)
{
	int lower = 0, upper = 0;
	printf("Enter upper and lower integers with a space in between: ");
	while (scanf("%d %d", &lower, &upper) == 2 && upper > lower)
	{
		while (getchar() != '\n');
		int sum = 0;
		for (int value = lower; value <= upper; ++value)
		{
			sum += value * value;
		}
		printf("Result: %d\n", sum);
		printf("Enter upper and lower integers with a space in between: ");
	}
	return 0;
}
