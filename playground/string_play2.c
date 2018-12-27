#include<stdio.h>
#define STLEN 10

int main(void)
{
	char string[STLEN];
	puts("Enter strings:");
	while (fgets(string, STLEN, stdin) != NULL && string[0] != '\n')
		fputs(string, stdout);
	puts("Done");

    return 0;
}
