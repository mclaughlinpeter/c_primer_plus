#include <stdio.h>
#include <ctype.h>

#define SIZE 10

void word_fetch(char ar[], unsigned int n);

int main(void)
{
	char array[SIZE];
	word_fetch(array, SIZE);
	printf("Characters entered: %s\n", array);	

	return 0;
}

void word_fetch(char ar[], unsigned int n)
{
	if (n > 1)
	{
		puts("Enter characters: ");
		char c;
		while (isspace(c = getchar()));
		*ar++ = c;

		while (--n > 1 && !isspace(c = getchar()))
			*ar++ = c;
		*ar = '\0';
	}
	else
		puts("Not enough room in array.");

	return;
}
