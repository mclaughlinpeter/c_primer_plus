#include <stdio.h>

double power(double x, int y);

int main(void)
{
	printf("%3.2f^%d: %3.2f\n", 5.0, 3, power(5, 3));
	printf("%3.2f^%d: %3.2f\n", 3.0, 4, power(3, 4));
	printf("%3.2f^%d: %3.2f\n", 2.0, 8, power(2, 8));
	printf("%3.2f^%d: %3.2f\n", 2.0, 0, power(2, 0));
	printf("%3.2f^%d: %3.2f\n", 5.0, -2, power(5, -2));
	printf("%3.2f^%d: %3.2f\n", 5.0, -1, power(5, -1));
	printf("%3.2f^%d: %3.2f\n", 0.0, 2, power(0, 2));
	printf("%3.2f^%d: %3.2f\n", 0.0, 0, power(0, 0));

	return 0;
}

double power(double x, int y)
{
	if (y > 0)
		return x * power(x, y - 1);
	else if (y < 0)
		return (1 / x) * power(x, y + 1);
	else if (y == 0)
		return 1;
}
