#include <stdio.h>

void critic(int * pi);

int main(void)
{
	int units = 0;

	puts("How many pounds to a firkin of butter?");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	puts("You must have looked it up!");

	return 0;
}

void critic(int * pi)
{
	puts("No luck, my friend. Try again.");
	scanf("%d", pi);
}
