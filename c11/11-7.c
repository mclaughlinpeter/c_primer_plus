#include <stdio.h>

char * mystrncpy(char * s1, const char * s2, int n);

int main(void)
{
	char array[40] = "0123456789";
	const char * string = "abcdefghijklm";
	mystrncpy(array, string, 25);
	puts(array);
	
	return 0;
}

char * mystrncpy(char * s1, const char * s2, int n)
{
	char * s1_start = s1;
	while (*s1)
		++s1;
	while (n-- > 0 && (*s1++ = *s2++));
	while (n-- > 0)
		*s1++ = '\0';
	return s1_start;
}
