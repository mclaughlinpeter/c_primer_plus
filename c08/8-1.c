#include <stdio.h>

int main(void)
{
	printf("Enter input, EOF to terminate: ");
	unsigned int countChar = 0;
	while (getchar() != EOF)
		++countChar;
	printf("%u characters were entered\n", countChar);

	return 0;
}
