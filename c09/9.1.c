#include <stdio.h>

double min(double x, double y);

int main(void)
{
	printf("%.16f\n", min(1.000000000000001, 1.0000001000));

	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;
}

