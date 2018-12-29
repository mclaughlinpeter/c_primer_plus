#include <stdio.h>

int main(int argc, char ** argv)
{
	while (argc > 1)
	{
		puts(argv[argc - 1]);
		--argc;
	}

	return 0;
}
