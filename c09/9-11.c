#include <stdio.h>

void Fibonacci(unsigned int n);

int main(void)
{
	Fibonacci(10);

	return 0;
}

void Fibonacci(unsigned int n)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int temp;

	for (unsigned int i = 1; i <=n; ++i)
	{
		printf("%u ", a);
		temp = b;
		b += a;
		a = temp;
	}
	printf("\n");
	
	return;
}	
