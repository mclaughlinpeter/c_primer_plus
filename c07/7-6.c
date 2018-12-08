#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	bool inSeq = false;
	unsigned int noSeq = 0;

	printf("Enter text, # to quit: ");
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
			inSeq = true;
		else if (ch == 'i' && inSeq == true)
		{
			++noSeq;
			inSeq = false;
		}
		else
			inSeq = false;	
	}
	printf("\nNo. seq:%3d\n", noSeq); 

	return 0;
}
