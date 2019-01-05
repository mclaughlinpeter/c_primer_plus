// pe12-5.c

#include "pe12-5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100

static int numbers[NUM];

void generate_numbers(void)
{
	for (int i = 0; i < NUM; ++i)
		numbers[i] = rand() % 10 + 1;
}

void sort_numbers(void)
{
	for (int i = 0; i < NUM-1; ++i)
		for (int j = i+1; j < NUM; ++j)
			if (numbers[i] > numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
}

void print_numbers(void)
{
	for (int i = 0; i < NUM; ++i)
	{
		printf("%4d", numbers[i]);
		if ((i+1) % 10 == 0)
			printf("\n");
	}
}
