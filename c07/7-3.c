#include <stdio.h>

int main(void)
{
	printf("Enter integers, 0 to quit: ");
	unsigned int ne = 0, no = 0;
	int totalEven = 0, totalOdd = 0, input = 0;

	while (scanf("%d", &input) == 1 && input != 0)
	{
		if ((input % 2) == 0)
		{
			++ne;
			totalEven += input;
		}
		else
		{
			++no;
			totalOdd += input;
		}
	}
	printf("Number of even:\t%3d, average:\t%3.2f\nNumber of odd:\t%3d, average:\t%3.2f\n", ne, (float)totalEven / ((ne != 0) ? ne : 1), no, (float)totalOdd / ((no != 0) ? no : 1));
	
	return 0;
}
