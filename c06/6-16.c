#include <stdio.h>

int main(void)
{
	double simple = 100.0;
	double compound = 100.0;

	for (int year = 1; simple >= compound; ++year)
	{
		simple += 100.0 * 0.1;
		compound += compound * 0.05;
		printf("Year: %2d, simple: %4.2f, compound: %4.2f\n", year, simple, compound);
	}
	
	return 0;
}
