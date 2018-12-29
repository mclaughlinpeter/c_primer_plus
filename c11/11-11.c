#include <stdio.h>
#include <string.h>

#define LINES 10
#define LIM 30

char get_menu_choice(void);
char * s_gets(char * st, int n);
int read_strings(int n_lines, int line_length, char array[][line_length], char ** pstr);
void print_strings(char ** pstr, int n_lines);

int main(void)
{
	char array[LINES][LIM];
	char * pstr[LINES];

	puts("Enter up to 10 strings, EOF on newline to stop.");
	int ct = read_strings(LINES, LIM, array, pstr);
	printf("Strings read: %d\n", ct);
	print_strings(pstr, ct);
	/*
	char menu_choice;
	while ((menu_choice = get_menu_choice()) != 'q')
	{
		switch (menu_choice)
		{
			case '1':
				// print strings
				break;
			case '2':
				sort_ascii_seq(pstr, ct);
				// print strings
				break;
			case '3':
				sort_length_string(pstr, ct);
				// print strings
				break;
			case '4':
				sort_length_word(pstr, ct);
				// print strings
				break;
			case 'q':
				exit(0);
			default:
				break;

		}
	}
	*/
	return 0;
}

char get_menu_choice(void)
{


}

char * s_gets(char * st, int n)
{
	char * ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		char * find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n');
	}
	return ret_val;
}

int read_strings(int n_lines, int line_length, char array[][line_length], char ** pstr)
{
	int i = 0;
	while (i < n_lines && s_gets(array[i], line_length) != NULL)
	{
		pstr[i] = array[i];
		++i;
	}
	return i;
}

void print_strings(char ** pstr, int n_lines)
{
	for (int i = 0; i < n_lines; ++i)
		puts(pstr[i]);
	return;
}
