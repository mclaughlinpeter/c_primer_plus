#include <stdio.h>

int main(void)
{
	double amount = 1000000.0;

	for (int year = 1; amount > 0.0; ++year)
	{
		amount += amount * 0.08;
		amount -= 100000;
		printf("Year:%3d, Amount:%11.2f\n", year, amount);
	}

	return 0;
}
