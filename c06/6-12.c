#include <stdio.h>

int main(void)
{
	int limit = 0;
	printf("Enter integer limit: ");
	while (scanf("%d", &limit) != 1 || limit <= 0)
	{
		while (getchar() != '\n');
		printf("Enter integer limit: ");
	}

	double sum1 = 1.0;
	for (int i = 2; i <= limit; ++i)
		sum1 += 1.0 / i;
	
	printf("sum1: %lf\n", sum1);
	
	double sum2 = 1.0;
	for (int i = 2; i <= limit; ++i)
		sum2 = sum2 + (1.0 / i) * (i % 2 == 0 ? -1 : 1);
	
	printf("sum2: %lf\n", sum2);
	
	return 0;
}
