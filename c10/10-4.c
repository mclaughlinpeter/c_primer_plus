#include <stdio.h>

int index_largest_double(const double * arr, int n);

int main(void)
{
	double array[] = { 2.4, 9.3, 29.5, -2.3, 1.0 };
	printf("Index of largest value: %d\n", index_largest_double(array, 5));

	return 0;
}

int index_largest_double(const double * arr, int n)
{
	int largest = 0;
	for (const double * pd = arr; pd < arr + n; ++pd)
		if (*pd > arr[largest])
			largest = pd - arr;
	return largest;
}
