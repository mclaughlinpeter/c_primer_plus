#include <stdio.h>
#include <string.h>

void rev_string(char * str);

int main(void)
{
	char array[] = "hello there";
	rev_string(array);
	puts(array);

	return 0;
}

void rev_string(char * str)
{
	int length = strlen(str);
	char temp[length + 1];
	strcpy(temp, str);

	for (int i = length-1; i >= 0; --i)
		*str++ = temp[i];

	return;
}


