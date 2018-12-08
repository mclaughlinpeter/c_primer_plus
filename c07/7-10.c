#include <stdio.h>

void printMessage(void);

int main(void)
{
	char menuOption;
	float taxableIncome = 0, tax = 0;	

	while (1)
	{
		printMessage();
		while (scanf("%c", &menuOption) != 1 || menuOption < '1' || menuOption > '5')
		{
			if (menuOption == '\n')
			{
				printMessage();
				continue;
			}
			else
			{
				while (getchar() != '\n');
				printMessage();
			}
		}
		if (menuOption == '5')
			return 0;
		while (getchar() != '\n');

		printf("Enter taxable income: ");
		while (scanf("%f", &taxableIncome) != 1)
		{
			while (getchar() != '\n');
			printf("Enter taxable income: ");
		}
		while (getchar() != '\n');

		switch (menuOption)
		{
			case '1':
				tax = (taxableIncome > 17850) ? 0.15 * 17850 + 0.28 * (taxableIncome - 17850) : 0.15 * taxableIncome;
				break;
			case '2':
				tax = (taxableIncome > 23900) ? 0.15 * 23900 + 0.28 * (taxableIncome - 23900) : 0.15 * taxableIncome;
				break;
			case '3':
				tax = (taxableIncome > 29750) ? 0.15 * 29750 + 0.28 * (taxableIncome - 29750) : 0.15 * taxableIncome;
				break;
			case '4':
				tax = (taxableIncome > 14875) ? 0.15 * 14875 + 0.28 * (taxableIncome - 14875) : 0.15 * taxableIncome;
				break;
			case '5':
				return 0;
				break;
			default:
				break;
		}
		printf("Tax: $%3.2f\n", tax);
	}
	printf("\n");

	return 0;
}

void printMessage(void)
{
	printf("Select from the following:\n1) Singe\n2) Head of household\n3) Married, joint\n4) Married, Separate\n5) [quit]\nSelection: ");
}
