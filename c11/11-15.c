#include <stdio.h>
#include <ctype.h>

int myatoi(const char * str);

int main(void)
{
	printf("%s = %d\n", "-345", myatoi("-345"));

	return 0;
}

int myatoi(const char * s)
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		++i;
	for (n = 0; isdigit(s[i]); ++i)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}
