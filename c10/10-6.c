#include <stdio.h>

void reverse_array_double(double * arr, int n);
void print_array_double(const double * arr, int n);

int main(void)
{
	double array[] = { 2.4, 9.3, 29.5, -2.3, 1.0 };
	print_array_double(array, 5);
	reverse_array_double(array, 5);
	print_array_double(array, 5);

	return 0;
}

void reverse_array_double(double * arr, int n)
{
	double temp[n];
	for (int i = 0; i < n; ++i)
		temp[i] = arr[i];
	for (int i = 0, j = n-1; i < n; ++i, --j)
		arr[i] = temp[j];
}

void print_array_double(const double * arr, int n)
{
	while (n-- > 0)
		printf("%.2f ", *arr++);
	printf("\n");
}

