#include <stdio.h>

#define OT_RATE 1.5
#define TAX_300 0.15
#define TAX_300_450 0.2
#define TAX_REMAINDER 0.25

void printMessage(void);

int main(void)
{
	float hoursInWeek = 0.0f;
	float grossPay = 0.0f;
	float taxes = 0.0f;
	float ratePerHour = 0.0f;
	char menuOption;

	while(1)
	{
	
		printMessage();
		while (scanf("%c", &menuOption) != 1 || menuOption < '1' || menuOption > '5')
		{
			if (menuOption == '\n')
			{
				printMessage();
				continue;
			}
			while (getchar() != '\n');
			printMessage();
		}
		while (getchar() != '\n');

		switch(menuOption)
		{
			case '1':
				ratePerHour = 8.75;
				break;
			case '2':
				ratePerHour = 9.33;
				break;
			case '3':
				ratePerHour = 10.00;
				break;
			case '4':
				ratePerHour = 11.20;
				break;
			case '5':
				return 0;
			default:
				break;
		}

		printf("Enter hours worked in week: ");
		while (scanf("%f", &hoursInWeek) != 1 || hoursInWeek <= 0)
		{
			while (getchar() != '\n');
			printf("Re-enter hours worked in week: ");
		}
		while (getchar() != '\n');
		grossPay = (hoursInWeek <= 40) ? (hoursInWeek * ratePerHour) : 40 * ratePerHour + (hoursInWeek - 40) * ratePerHour * OT_RATE;

		printf("Gross pay:\t%3.2f\n", grossPay);	

		if (grossPay > 450)
			taxes = (grossPay - 450) * TAX_REMAINDER + (450 - 300) * TAX_300_450 + 300 * TAX_300;
		else if (grossPay <= 450 && grossPay > 300)
			taxes = (grossPay - 300) * TAX_300_450 + 300 * TAX_300;
		else
			taxes = grossPay * TAX_300;
		printf("Taxes:\t\t%3.2f\n", taxes);

		printf("Net pay:\t%3.2f\n", grossPay - taxes);
	}

	return 0;
}

void printMessage()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                         2) $9.33/hr\n");
	printf("3) $10.00/hr                        4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
}
