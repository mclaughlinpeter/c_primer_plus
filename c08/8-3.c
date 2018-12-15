#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("Enter input, EOF to terminate: ");
	unsigned nu = 0, nl = 0, no = 0;
	int c;
	
	while ((c = getchar()) != EOF)
	{
		if (isupper(c))
			++nu;
		else if (islower(c))
			++nl;
		else
			++no;
	}

	printf("nu = %3u, nl = %3u, no = %3u\n", nu, nl, no);

	return 0;
}
