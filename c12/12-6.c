#include <stdio.h>
#include "pe12-6.h"

int main(void)
{
	for (int i = 0; i < 10; ++i)
	{
		seed_generator();
		generate_numbers();
		print_results();
		printf("\n");
	}

	return 0;
}
