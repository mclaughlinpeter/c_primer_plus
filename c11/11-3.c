#include <stdio.h>
#include <ctype.h>

#define SIZE 20

void word_fetch(char ar[]);

int main(void)
{
	char array[SIZE];
	word_fetch(array);
	printf("Characters entered: %s\n", array);	

	return 0;
}

void word_fetch(char ar[])
{
	puts("Enter characters: ");
	char c;
	while (isspace(c = getchar()));
	*ar++ = c;

	while (!isspace(c = getchar()))
		*ar++ = c;
	*ar = '\0';

	return;
}
