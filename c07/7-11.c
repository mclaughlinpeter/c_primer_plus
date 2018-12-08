#include <stdio.h>

void printMenu(void);

float getInput(void);

int main(void)
{
	char menuOption;
	float poundsArtichokes = 0.0f, poundsBeets = 0.0f, poundsCarrots = 0.0f, totalDollars = 0.0f, poundsTotal = 0.0f, shipping = 0.0f;
	
	while (1)
	{
		printMenu();
		while (scanf("%c", &menuOption) != 1 || (menuOption != 'a' && menuOption != 'b' && menuOption != 'c' && menuOption != 'q'))
		{
			if (menuOption == '\n')
			{
				printMenu();
				continue;
			}
			while (getchar() != '\n');
			printMenu();
		}
		while (getchar() != '\n');

		if (menuOption == 'q')
			break;

		switch (menuOption)
		{
			case 'a':
				poundsArtichokes += getInput();
				break;
			case 'b':
				poundsBeets += getInput();
				break;
			case 'c':
				poundsCarrots += getInput();
				break;
			default:
				break;
		}
	}

	totalDollars = poundsArtichokes * 2.05 + poundsBeets * 1.15 + poundsCarrots * 1.09;
	if (totalDollars == 0.0f)
	{
		printf("There are no articles in this order.\n");
		return 0;
	}
	printf("\nRaw total: $%3.2f\n", totalDollars);

	if (totalDollars >= 100.00f)
	{
		float discount = totalDollars * 0.05;
		printf("Discount: $%3.2f\n", discount);
		totalDollars = totalDollars - discount;
		printf("Total after discount: $%3.2f\n", totalDollars);
	}
	
	poundsTotal = poundsArtichokes + poundsBeets + poundsCarrots;
	printf("Total weight: $%3.2f lbs\n", poundsTotal);

	if (poundsTotal <= 5.00f)
		shipping = 6.50f;
	else if (poundsTotal <= 20.00f)
		shipping = 14.00f;
	else
		shipping = 14.00f + poundsTotal * 0.50f;	
	printf("Shipping costs: $%3.2f\n", shipping);

	printf("Total cost with shipping: $%3.2f\n", totalDollars + shipping);

	return 0;
}

void printMenu(void)
{
	printf("\nSelect from the following (q to complete order):\n");
	printf("a) for artichokes\n");
	printf("b) for beets\n");
	printf("c) for carrots\n");
	printf("Enter selection: ");
}

float getInput(void)
{
	printf("Enter value in pounds: ");
	float input = 0.0f;
	while (scanf("%f", &input) != 1)
	{
		while (getchar() != '\n');
		printf("Enter value in pounds: ");
	}
	while (getchar() != '\n');
	return input;
}
