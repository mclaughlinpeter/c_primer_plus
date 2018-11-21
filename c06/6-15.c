#include <stdio.h>
#include <string.h>

#define SIZE 250

int main(void)
{
	printf("Enter a line of text: ");
	char input[SIZE];
	char c;
	int i = 0;
	while (scanf("%c", &c) == 1 && c != '\n' && i < SIZE-1) // does not save \n into array
	{
		input[i++] = c;
	}
	input[i] = '\0';

	printf("Line entered:\t%s\n", input);
	printf("Line length:\t%zd\n", strlen(input));

	printf("Line backwards:\t");
	while (--i >= 0)
		printf("%c", input[i]);
	printf("\n");

	return 0;
}

