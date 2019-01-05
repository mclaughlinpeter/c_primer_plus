#include "pe12-2a.h"
#include <stdio.h>

static int mode = 0;
static double distance = 0.0;
static double fuel = 0.0;

static void get_double(double * pd)
{
	while (scanf("%lf", pd) != 1)
	{
		while (getchar() != '\n');
		printf("Re-enter value: ");
	}
	while (getchar() != '\n');
}

void set_mode(int m)
{
	mode = m;
}

void get_info(void)
{
	if (mode == 0)
	{
		printf("Enter distance travelled in kilometers: ");
		get_double(&distance);
		printf("Enter fuel consumed in liters: ");
		get_double(&fuel);
	}
	else
	{
		if (mode > 1 || mode < 0)
			puts("Invalid mode specified. Mode 1(US) used.");
		printf("Enter distance travelled in miles: ");
		get_double(&distance);
		printf("Enter fuel consumed in gallons: ");
		get_double(&fuel);
	}
}

void show_info(void)
{
	if (mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km\n", (fuel / distance) * 100);
	else
		printf("Fuel consumption is %.2f miles per gallon\n", distance / fuel);
}
