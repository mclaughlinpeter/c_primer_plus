#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("Enter a positive integer: ");
	unsigned int input;
	while (scanf("%u", &input) != 1 || input <= 0)
	{
		while (getchar() != '\n');
		printf("Enter a positive integer: ");
	}


	bool isPrime;
	unsigned int test, divisor;

	for (test = 2; test <= input; ++test)
	{
		for (isPrime = true, divisor = 2; divisor * divisor <= test; ++divisor)
			if ((test % divisor) == 0)
				isPrime = false;
		if (isPrime == true)
			printf("%u ", test);
	}
	printf("\n");

	return 0;
}
