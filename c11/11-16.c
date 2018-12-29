#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char ** argv)
{
	enum output { as_is, upper, lower };
	enum output output_type;
	if (argc > 1 && strlen(argv[1]) == 2 && argv[1][0] == '-')
	{
		if (argv[1][1] == 'u')
			output_type = upper;
		else if (argv[1][1] == 'l')
			output_type = lower;
		else
			output_type = as_is;
	}
	char input;
	while ((input = getchar()) != EOF)
	{
		if (output_type == upper)
			putchar(toupper(input));
		else if (output_type == lower)
			putchar(tolower(input));
		else
			putchar(input);
	}

	return 0;
}
