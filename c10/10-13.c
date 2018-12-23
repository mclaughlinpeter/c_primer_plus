#include <stdio.h>

#define COLUMNS 5
#define ROWS 3

double user_input_double(void);
double average_array_double(const double * ar, int n);
double average_array_2D_double(const double ar[][COLUMNS], int n);
double largest_array_2D_double(const double ar[][COLUMNS], int n);

int main(void)
{
	double array[ROWS][COLUMNS];
	for (int i = 0; i < ROWS; ++i)
		for (int j = 0; j < COLUMNS; ++j)
			array[i][j] = user_input_double();

	for (int i = 0; i < ROWS; ++i)
		printf("Average of row %d: %.2f\n", i+1, average_array_double(array[i], COLUMNS));

	printf("Average of all: %.2f\n", average_array_2D_double(array, ROWS));

	printf("Largest value: %.2f\n", largest_array_2D_double(array, ROWS));

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

double average_array_double(const double * ar, int n)
{
	double total = 0.0;
	for (int i = 0; i < n; ++i)
		total += ar[i];
	return total / n;
}

double average_array_2D_double(const double ar[][COLUMNS], int n)
{
	double total = 0.0;
	for (int i = 0; i < n; ++i)
		total += average_array_double(ar[i], COLUMNS);
	return total / n;
}

double largest_array_2D_double(const double ar[][COLUMNS], int n)
{
	double largest = ar[0][0];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < COLUMNS; ++j)
			if (ar[i][j] > largest)
				largest = ar[i][j];
	return largest;
}


