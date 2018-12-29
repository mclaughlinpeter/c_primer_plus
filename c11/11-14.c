#include <stdio.h>
#include <stdlib.h>

double mypow(double number, int power);

int main(int argc, char ** argv)
{
	if (argc != 3)
	{
		puts("Incorrect number of command line args.");
		exit(1);
	}

	double number = atof(argv[1]);
	int power = atoi(argv[2]);

	printf("%.2f to the power %d is %.2f\n", number, power, mypow(number, power));

	return 0;
}

double mypow(double number, int power)
{
	double total = 1;
	while (power-- > 0)
		total *= number;
	return total;
}

