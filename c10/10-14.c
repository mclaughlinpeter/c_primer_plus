#include <stdio.h>

#define COLUMNS 4
#define ROWS 2

double user_input_double(void);
double average_array_double(int n, const double * ar);
double average_array_2D_double(int n, int m, const double ar[][m]);
double largest_array_2D_double(int n, int m, const double ar[][m]);

int main(void)
{
	double array[ROWS][COLUMNS];
	for (int i = 0; i < ROWS; ++i)
		for (int j = 0; j < COLUMNS; ++j)
			array[i][j] = user_input_double();

	for (int i = 0; i < ROWS; ++i)
		printf("Average of row %d: %.2f\n", i+1, average_array_double(COLUMNS, array[i]));

	printf("Average of all: %.2f\n", average_array_2D_double(ROWS, COLUMNS, array));

	printf("Largest value: %.2f\n", largest_array_2D_double(ROWS, COLUMNS, array));

	return 0;
}

double user_input_double(void)
{
	double input = 0.0;
	printf("Enter double: ");
	while (scanf("%lf", &input) != 1)
	{
		while (getchar() != '\n');
		printf("Enter double: ");
	}
	while (getchar() != '\n');
	return input;
}

double average_array_double(int n, const double * ar)
{
	double total = 0.0;
	for (int i = 0; i < n; ++i)
		total += ar[i];
	return total / n;
}

double average_array_2D_double(int n, int m, const double ar[][m])
{
	double total = 0.0;
	for (int i = 0; i < n; ++i)
		total += average_array_double(m, ar[i]);
	return total / n;
}

double largest_array_2D_double(int n, int m, const double ar[][m])
{
	double largest = ar[0][0];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (ar[i][j] > largest)
				largest = ar[i][j];
	return largest;
}


