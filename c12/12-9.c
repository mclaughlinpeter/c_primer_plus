#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	printf("How many words do you wish to enter? ");
	int words;
	scanf("%d", &words);
	while (getchar() != '\n');

	char ** ppc = (char **) malloc(words * sizeof (char *));

	char buffer[21];

	printf("Enter %d words now:\n", words);
	for (int i = 0; i < words; ++i)
	{
		scanf("%20s", buffer);
		ppc[i] = (char *) malloc ((strlen(buffer) + 1) * sizeof (char));
		strcpy(ppc[i], buffer);
		char c;
		while ((c = getchar()) && !isspace(c));
	}

	puts("Here are your words:");
	for (int i = 0; i < words; ++i)
		puts(ppc[i]);

	for (int i = 0; i < words; ++i)
		free(ppc[i]);
	free(ppc);
	
	return 0;
}
