#include <stdio.h>

double harm_mean(double x, double y);

int main(void)
{
	printf("Harmonic mean of %3.2f and %3.2f is %3.2f\n", 4.5, 5.6, harm_mean(4.5, 5.6));

	return 0;
}

double harm_mean(double x, double y)
{
	x = 1 / x;
	y = 1 / y;

	return 1 / ((x + y) / 2);
}
