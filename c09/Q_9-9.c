#include <stdio.h>

void printMenu(void);
int getChoice(int low, int high);

int main(void)
{
	printMenu();
	printf("Choice: %3d\n", getChoice(1, 10));

	return 0;
}

void printMenu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files            2) move files\n");
	printf("3) remove files          4) quit\n");
	printf("Enter the number of your choice: ");
}

int getChoice(int low, int high)
{
	int input = 0;
	int scanfReturn = 0;

	while ((scanfReturn = scanf("%d", &input)) == 1 && (input < low || input > high))
	{
		while (getchar() != '\n');
		printf("Out of range, try again.\n");
		printMenu();
	}

	if (scanfReturn != 1)
	{
		input = 4;
	}

	return input;
}

