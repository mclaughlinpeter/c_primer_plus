#include <stdio.h>

void print_arr(const double * arr, int n);
void copy_arr(double t[], const double s[], int n);

int main(void)
{

	double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 8.8, 2.3 };
	double target[3];

	print_arr(source, 7);
	copy_arr(target, source + 2, 3);
	print_arr(target, 3);

	return 0;
}

void copy_arr(double t[], const double s[], int n)
{
	while (n-- > 0)
		*t++ = *s++;
	return;
}

void print_arr(const double * arr, int n)
{
	while (n-- > 0)
		printf("%.2f ", *arr++);
	printf("\n");
	return;
}
