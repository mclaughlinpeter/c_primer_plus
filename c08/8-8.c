#include <stdio.h>

char getMenuChoice(void);
float getNumber(void);

int main(void)
{
	float arg1 = 0.0f, arg2 = 0.0f;
	char choice;

	while ((choice = getMenuChoice()) != 'q')
	{
		arg1 = getNumber();
		arg2 = getNumber();
		switch (choice)
		{
			case 'a':
				printf("%3.2f + %3.2f = %3.2f\n\n", arg1, arg2, arg1 + arg2);
				break;
			case 'b':
				printf("%3.2f - %3.2f = %3.2f\n\n", arg1, arg2, arg1 - arg2);
				break;
			case 'c':
				printf("%3.2f * %3.2f = %3.2f\n\n", arg1, arg2, arg1 * arg2);
				break;
			case 'd':
				while (arg2 == 0.0f)
				{
					printf("(denominator must be non-zero) ");
					arg2 = getNumber();
				}
				printf("%3.2f / %3.2f = %3.2f\n\n", arg1, arg2, arg1 / arg2);
				break;
			default:
				break;
		}
	}				

	return 0;
}

char getMenuChoice(void)
{
	printf("*************************************\n");
	printf("Enter menu choice:\n");
	printf("a) addition           b) substraction\n");
	printf("c) multiplication     d) division\n");
	printf("q) quit\n");
	printf("*************************************\n");

	char input;
	while ((input = getchar()) && ((input < 'a' || input > 'd') && input != 'q'))
	{
		printf("Re-enter menu choice: ");
		if (input == '\n')
			continue;
		while (getchar() != '\n');
	}

	return input;
}

float getNumber(void)
{
	printf("Enter value: ");
	float input = 0.0f;
	while (scanf("%f", &input) != 1)
	{
		printf("Re-enter value: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	return input;
}

