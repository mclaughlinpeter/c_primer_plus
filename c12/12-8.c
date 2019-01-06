#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
	int * pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit): ");
	}
	printf("Done\n");
	return 0;
}

int * make_array(int elem, int val)
{
	int * pi = (int *) malloc(elem * sizeof(int));
	if (pi)
		for (int i = 0; i < elem; ++i)
			pi[i] = val;
	return pi;
}

void show_array(const int ar[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%3d ", ar[i]);
		if ((i+1) % 8 == 0)
			putchar('\n');
	}
	if (i % 8 != 0)
		putchar('\n');
}
