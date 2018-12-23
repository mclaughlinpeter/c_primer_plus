#include <stdio.h>

int main(void)
{

	int array[] = { 4, 3, 2, 1 };
	printf("%zd\n", sizeof(array));

	int * arrayPointer = array;
	printf("%zd\n", sizeof(arrayPointer));

	int (* pz)[2];
	printf("%zd\n", sizeof(pz));

	int (* pt2)[4] = (int [][4]) { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
	printf("%d\n", *(*(pt2 + 1)));

	return 0;
}
