#include <stdio.h>

#define MONTHS 12
#define YEARS 5

void print_rainfall_year(int n, int m, const float rain[][m]);
void print_rainfall_month(int n, int m, const float rain[][m]);

int main(void)
{
	const float rain[YEARS][MONTHS] = 
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};


	print_rainfall_year(YEARS, MONTHS, rain);
	print_rainfall_month(YEARS, MONTHS, rain);

	return 0;
}

void print_rainfall_year(int n, int m, const float rain[][m])
{
	float const (*py)[m] = rain;
	float const * pm = *py;
	float subtot, total;

	printf(" YEAR            RAINFALL (inches)\n");
	for (total = 0.0f; py < rain + n; ++py)
	{
		for (subtot = 0.0f, pm = *py; pm < *py + m; ++pm)
			subtot += *pm;
		printf("%5ld %15.1f\n", 2010 + (py - rain), subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / n);

	return;
}

void print_rainfall_month(int n, int m, const float rain[][m])
{
	float const (*py)[MONTHS] = rain;
	float const * pm = *py;
	float subtot, total;

	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	for (py = rain, pm = *py; pm < *rain + m; ++pm)
	{
		for (subtot = 0.0f, py = rain; py < rain + n; ++py)
			subtot += *(*py + (pm - *rain));
		printf("%4.1f ", subtot / n);
	}
	printf("\n");

	return;
}



