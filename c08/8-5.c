#include <stdio.h>
#include <math.h>

int main(void)
{
	// binary search strategy
	printf("Pick an integer between 1 and 100; I will try to guess.\n");
	printf("Enter 'y' if correct, 'l' if guess is low and 'h' if guess is high.\n");

	unsigned int guess = 50, lower = 1, upper = 100;
	char input;

	printf("guess = %3u....", guess);
	while ((input = getchar()) != 'y')
	{
		if (input == 'h')
		{
			upper = guess;
			guess = (lower + upper) / 2;
		}		
		else if (input == 'l')
		{
			lower = guess;
			guess = ceil((float)(lower + upper) / 2);
		}
		else
			printf("Enter 'y' if correct, 'l' if guess is low and 'h' if guess is high.\n");
		while (getchar() != '\n');
		printf("guess = %3u....", guess);
	}
	printf("\nyour number is: %3u\n", guess);

	return 0;
}
