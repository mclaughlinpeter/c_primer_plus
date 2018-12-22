#include <stdio.h>

void to_base_n(unsigned int n, unsigned int b);

int main(void)
{
	to_base_n(9, 2);
	printf("\n");
	to_base_n(129, 8);
	printf("\n");

	return 0;
}

void to_base_n(unsigned int n, unsigned int b)
{
	// error check on boundaries
	
	int r = n % b;
	if (n >= b)
		to_base_n(n / b, b);
	printf("%d", r);

	return;
}
