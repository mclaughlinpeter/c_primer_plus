#include <stdio.h>

#define $_PER_HOUR 10.00
#define $_PER_OTHOUR $_PER_HOUR * 1.5
#define TAX_300 0.15
#define TAX_300_450 0.2
#define TAX_REMAINDER 0.25

int main(void)
{
	float hoursInWeek = 0.0f;
	float grossPay = 0.0f;
	float taxes = 0.0f;

	printf("Enter hours worked in week: ");
	while (scanf("%f", &hoursInWeek) != 1 || hoursInWeek <= 0)
	{
		while (getchar() != '\n');
		printf("Re-enter hours worked in week: ");
	}
	grossPay = (hoursInWeek <= 40) ? (hoursInWeek * $_PER_HOUR) : 40 * $_PER_HOUR + (hoursInWeek - 40) * $_PER_OTHOUR;

	printf("Gross pay:\t%3.2f\n", grossPay);	

	if (grossPay > 450)
		taxes = (grossPay - 450) * TAX_REMAINDER + (450 - 300) * TAX_300_450 + 300 * TAX_300;
	else if (grossPay <= 450 && grossPay > 300)
		taxes = (grossPay - 300) * TAX_300_450 + 300 * TAX_300;
	else
		taxes = grossPay * TAX_300;
	printf("Taxes:\t\t%3.2f\n", taxes);

	printf("Net pay:\t%3.2f\n", grossPay - taxes);

	return 0;
}
