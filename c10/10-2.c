#include <stdio.h>

void print_arr(const double * arr, int n);
void copy_arr(double t[], const double s[], int n);
void copy_ptrs(double * t, const double * source, const double * source_end);

int main(void)
{

	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	print_arr(source, 5);
	copy_arr(target1, source, 5);
	print_arr(target1, 5);
	copy_ptrs(target3, source, source + 5);
	print_arr(target3, 5);

	return 0;
}

void copy_arr(double t[], const double s[], int n)
{
	while (n-- > 0)
		*t++ = *s++;
	return;
}

void copy_ptrs(double * t, const double * source, const double * source_end)
{
	while(source < source_end)
		*t++ = *source++;
	return;
}

void print_arr(const double * arr, int n)
{
	while (n-- > 0)
		printf("%.2f ", *arr++);
	printf("\n");
	return;
}
