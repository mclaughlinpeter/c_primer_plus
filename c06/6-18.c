#include <stdio.h>

int main(void)
{
	for (int week = 1, friends = 5; friends <= 150; ++week)
	{
		friends -= week;
		friends *= 2;
		printf("Week:%3d, Friends:%4d\n", week, friends);
	}

	return 0;
}
