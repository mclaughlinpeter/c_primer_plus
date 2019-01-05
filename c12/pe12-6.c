// pe12-6.c
#include "pe12-6.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define NUM 1000
#define RANGE 10

static int results[RANGE];

void generate_numbers(void)
{
	for (int i = 0; i < RANGE; ++i)
		results[i] = 0;
	for (int i = 0; i < NUM; ++i)
		++results[rand() % RANGE];
}

void seed_generator(void)
{
	usleep(1500000);
	srand((unsigned int) time(NULL));
}

void print_results(void)
{
	for (int i = 0; i < RANGE; ++i)
		printf("%2d:%-4d", i+1, results[i]);
}
