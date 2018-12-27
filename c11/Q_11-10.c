#include <stdio.h>
#include <string.h>

size_t my_strlen(const char * str);

int main(void)
{
	const char * string = "123456789";

	printf("Length using my_strlen: %zd\n", my_strlen(string));
	printf("Length using strlen: %zd\n", strlen(string));

	return 0;
}

size_t my_strlen(const char * str)
{
	const char * count = str;
	while (*count)
		++count;
	return count - str;
}
