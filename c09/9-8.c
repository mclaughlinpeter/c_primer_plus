#include <stdio.h>

double power(double x, int y);

int main(void)
{
	printf("%3.2f^%d: %3.2f\n", 5.0, 2, power(5, 2));
	printf("%3.2f^%d: %3.2f\n", 5.0, 0, power(5, 0));
	printf("%3.2f^%d: %3.2f\n", 5.0, -2, power(5, -2));
	printf("%3.2f^%d: %3.2f\n", 0.0, 2, power(0, 2));
	printf("%3.2f^%d: %3.2f\n", 0.0, 0, power(0, 0));

	return 0;
}

double power(double x, int y)
{
	double result = 0.0;
	int power = y < 0 ? -y : y;

	if (0.0 == x && 0 == y) printf("(undefined) ");

	for (result = 1; power > 0; --power)
		result *= x;

	return y < 0 ? 1 / result : result;
}
