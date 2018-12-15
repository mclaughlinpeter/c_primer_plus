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
		while (scanf("%c", &menuOption) != 1 || ((menuOption < 'a' || menuOption > 'd') && menuOption != 'q'))
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
			case 'a':
				ratePerHour = 8.75;
				break;
			case 'b':
				ratePerHour = 9.33;
				break;
			case 'c':
				ratePerHour = 10.00;
				break;
			case 'd':
				ratePerHour = 11.20;
				break;
			case 'q':
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
	printf("a) $8.75/hr                         b) $9.33/hr\n");
	printf("c) $10.00/hr                        d) $11.20/hr\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
}
