#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LINES 10
#define LIM 30

char get_menu_choice(void);
char * s_gets(char * st, int n);
int read_strings(int n_lines, int line_length, char array[][line_length], char ** pstr);
void print_strings(char ** pstr, int n_lines);
void sort_ascii_seq(char ** pstr, int n_lines);
void sort_length_string(char ** pstr, int n_lines);
void sort_length_word(char ** pstr, int n_lines);
size_t strlen_first_word(const char * str);

int main(void)
{
	char array[LINES][LIM];
	char * pstr[LINES];

	puts("Enter up to 10 strings, EOF on newline to stop.");
	int ct = read_strings(LINES, LIM, array, pstr);
	printf("Strings read: %d\n", ct);
	print_strings(pstr, ct);
	
	char menu_choice;
	while ((menu_choice = get_menu_choice()) != 'q')
	{
		switch (menu_choice)
		{
			case '1':
				for (int i = 0; i < ct; ++i)
					pstr[i] = array[i];
				print_strings(pstr, ct);
				break;
			case '2':
				sort_ascii_seq(pstr, ct);
				print_strings(pstr, ct);
				break;
			case '3':
				sort_length_string(pstr, ct);
				print_strings(pstr, ct);
				break;
			case '4':
				sort_length_word(pstr, ct);
				print_strings(pstr, ct);
				break;
			case 'q':
				exit(0);
			default:
				break;

		}
	}
	
	return 0;
}

char get_menu_choice(void)
{
	puts("Enter menu choice:");
	puts("  1) print strings           2) print by ascii sort");
	puts("  3) print by string length  4) print by 1st word length");
	puts("  q) quit");
	char input;
	while ((input = getchar()) && ((input < '1' || input > '4') && tolower(input) != 'q'))
	{
		if (input != '\n')
			while (getchar() != '\n');
		printf("Re-enter menu choice: ");
	}
	while (getchar() != '\n');
	
	return tolower(input);
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

void sort_ascii_seq(char ** pstr, int n_lines)
{
	for (int i = 0; i < n_lines - 1; ++i)
		for (int j = i + 1; j < n_lines; ++j)
			if (strcmp(pstr[i], pstr[j]) > 0)
			{
				char * temp = pstr[i];
				pstr[i] = pstr[j];
				pstr[j] = temp;
			}
}

void sort_length_string(char ** pstr, int n_lines)
{
	for (int i = 0; i < n_lines - 1; ++i)
		for (int j = i + 1; j < n_lines; ++j)
			if (strlen(pstr[i]) > strlen(pstr[j]))
			{
				char * temp = pstr[i];
				pstr[i] = pstr[j];
				pstr[j] = temp;
			}
}

void sort_length_word(char ** pstr, int n_lines)
{
	for (int i = 0; i < n_lines - 1; ++i)
		for (int j = i + 1; j < n_lines; ++j)
			if (strlen_first_word(pstr[i]) > strlen_first_word(pstr[j]))
			{
				char * temp = pstr[i];
				pstr[i] = pstr[j];
				pstr[j] = temp;
			}
}

size_t strlen_first_word(const char * str)
{
	while (*str && isspace(*str))
		++str;
	const char * ps = str;
	while (*ps && !isspace(*ps))
		++ps;
	return ps - str;
}
