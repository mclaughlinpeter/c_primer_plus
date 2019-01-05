#include <stdio.h>

int counter(void);

int main(void)
{
	for (int i = 0; i < 10; ++i)
		printf("%d\n", counter());
	return 0;
}

int counter(void)
{
	static int count = 0;
	return ++count;
}
