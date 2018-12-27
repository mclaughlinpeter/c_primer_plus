#include <stdio.h>
#include <string.h>

char * find_space(const char * str);

int main(void)
{
	const char * string = "1234 56789";

	printf("Position of first space: %zd\n", find_space(string) - string);

	return 0;
}

char * find_space(const char * str)
{
	return strchr(str, ' ');
}
