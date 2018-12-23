#include <stdio.h>

void array_sum_double(const double * s1, const double * s2, double * t, int n);
void print_array(const double * ar, int n);

int main(void)
{
	double source1[5] = { 1.9, 2.2, 8.2, 9.3, 1.6 };
	double source2[5] = { 1.9, 2.2, 8.2, 9.3, 1.6 };
	double target[5];

	array_sum_double(source1, source2, target, 5);
	print_array(target, 5);

	return 0;
}

void array_sum_double(const double * s1, const double * s2, double * t, int n)
{
	while (n-- > 0)
		*t++ = *s1++ + *s2++;
	return;
}

void print_array(const double * ar, int n)
{
	while (n-- > 0)
		printf("%.2f ", *ar++);
	printf("\n");
	
	return;
}

