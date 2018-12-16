#include <stdio.h>

void sort_array_double(double pda[], int n);

void print_array_double(double pda[], int n);

void double_move(double * pd1, double * pd2, double * pd3);

int main(void)
{
	double da[] = { 10.4, 3.7, 8.2, 9.1, 25.8, 2.4 };
	print_array_double(da, 6);
	sort_array_double(da, 6);
	print_array_double(da, 6);

	double x = 4.8, y = 8.8, z = 2.9;
	double_move(&x, &y, &z);
	printf("x = %3.2f, y = %3.2f, z = %3.2f\n", x, y, z);

	return 0;
}

void double_move(double * pd1, double * pd2, double * pd3)
{
	double da[] = { *pd1, *pd2, *pd3 };
	sort_array_double(da, 3);

	*pd1 = da[0];
	*pd2 = da[1];
	*pd3 = da[2];

	return;
}

void sort_array_double(double pda[], int n)
{
	double temp = 0.0;
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (*(pda + i) > *(pda + j))
			{
				temp = *(pda + i);
				*(pda + i) = *(pda + j);
				*(pda + j) = temp;
			}

	return;
}

void print_array_double(double pda[], int n)
{
	for (int i = 0; i < n; ++i)
		printf("%3.2f ", *(pda + i));
	printf("\n");

	return;
}
