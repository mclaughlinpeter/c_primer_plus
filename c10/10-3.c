#include <stdio.h>

int largest_int(const int arr[], int n);

int main(void)
{
	int array[] = { 2, 8, 19, 2, -4 };
	printf("Largest value: %d\n", largest_int(array, 5));

	return 0;
}

int largest_int(const int arr[], int n)
{
	int result = *arr;
	for (const int * pi = arr; pi < arr + n; ++pi)
		if (*pi > result)
			result = *pi;
	return result;
}
