#include <stdio.h>

void print_arr(const double * arr, int n);
void copy_arr_2D(int n, int m, const double s[n][m], double t[n][m]);
void print_arr_2D(int n, int m, const double arr[n][m]);
void copy_arr(double t[], const double s[], int n);
void copy_ptrs(double * t, const double * source, const double * source_end);

int main(void)
{

	double source[3][5] = { { 1.1, 2.2, 3.3, 4.4, 5.5 }, { 4.8, 8.2, 4.9, 0.9, 2.3 }, { 3.9, 2.8, 1.8, 3.7, 4.5 } };
	double target[3][5];

	print_arr_2D(3, 5, source);
	copy_arr_2D(3, 5, source, target);
	print_arr_2D(3, 5, target);

	return 0;
}

void copy_arr_2D(int n, int m, const double s[n][m], double t[n][m])
{
	for (int i = 0; i < n; ++i)
		copy_arr(t[i], s[i], m);
	return;
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

void print_arr_2D(int n, int m, const double arr[n][m])
{
	for (int i = 0; i < n; ++i)
		print_arr(arr[i], m);
	printf("\n");
	return;
}

void print_arr(const double * arr, int n)
{
	while (n-- > 0)
		printf("%.2f ", *arr++);
	printf("\n");
	return;
}
