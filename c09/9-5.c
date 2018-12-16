#include <stdio.h>

void larger_of(double * pd1, double * pd2);

int main(void)
{
	double x1 = 6.4, y1 = 8.9;
	printf("x1 = %3.2f, y1 = %3.2f\n", x1, y1);
	larger_of(&x1, &y1);
	printf("x1 = %3.2f, y1 = %3.2f\n", x1, y1);

	double x2 = 10.84, y2 = 8.9;
	printf("x2 = %3.2f, y2 = %3.2f\n", x2, y2);
	larger_of(&x2, &y2);
	printf("x2 = %3.2f, y2 = %3.2f\n", x2, y2);

	return 0;
}

void larger_of(double * pd1, double * pd2)
{
	if (*pd1 > *pd2)
		*pd2 = *pd1;
	else
		*pd1 = *pd2;

	return;
}
