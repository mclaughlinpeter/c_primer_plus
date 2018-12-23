#include <stdio.h>

double diff_array_double(double * arr, int n);

int main(void)
{
	double array[] = { 2.4, 9.3, 29.5, -2.3, 1.0 };
	printf("Difference between largest and smallest value: %.2f\n", diff_array_double(array, 5));

	return 0;
}

double diff_array_double(double * arr, int n)
{
	int largest = 0, smallest = 0;
	for (const double * pd = arr; pd < arr + n; ++pd)
	{
		if (*pd > arr[largest])
			largest = pd - arr;
		if (*pd < arr[smallest])
			smallest = pd - arr;
	}

	return arr[largest] - arr[smallest];
}
