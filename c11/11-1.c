#include <stdio.h>

#define SIZE 10

void char_fetch(char ar[], unsigned int n);

int main(void)
{
	char array[SIZE];
	char_fetch(array, SIZE);
	printf("First %d characters entered: %s\n", SIZE, array);	

	return 0;
}

void char_fetch(char ar[], unsigned int n)
{
	printf("Enter %u characters: ", n);
	while (n-- > 1)
		*ar++ = getchar();
	*ar = '\0';
	return;
}
