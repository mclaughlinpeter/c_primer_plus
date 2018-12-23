#include <stdio.h>

void print_array_double(const double * ar, int n);
void print_array_double_2D(const double ar[][5], int n);
void array_multiply_2_double(double ar[][5], int n);

int main(void)
{
	double array[3][5] = { { 1.3, 3.4, 8.9, 2.9, 2.9 }, { 2.9, 2.9, 1.9, 3.8, 9.9 }, { 2.9, 8.7, 2.9, 9.6, 2.7 } };
	print_array_double_2D(array, 3);
	array_multiply_2_double(array, 3);
	print_array_double_2D(array, 3);

	return 0;
}

void print_array_double(const double * ar, int n)
{
	while (n-- > 0)
		printf("%.2f ", *ar++);
	printf("\n");

	return;
}

void print_array_double_2D(const double ar[][5], int n)
{
	for (int i = 0; i < n; ++i)
		print_array_double(ar[i], 5);
	printf("\n");

	return;
}

void array_multiply_2_double(double ar[][5], int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < 5; ++j)
			ar[i][j] *= 2;
	return;
}
