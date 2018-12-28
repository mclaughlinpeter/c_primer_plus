#include <stdio.h>
#include <stdbool.h>

const char * string_in(const char * s1, const char * s2);

int main(void)
{
	char array[40] = "0123456789";
	const char * string = "3457";
	const char * ret_val = string_in(array, string);
	if (ret_val != NULL)
		printf("s2 found in s1 at %zd\n", ret_val - array);
	else
		puts("s2 not found in s1");
	
	return 0;
}

const char * string_in(const char * s1, const char * s2)
{
	const char * s2_start_s1, * s2_pos = s2;
	bool inString = false;

	while (*s1)
	{
		if (inString)
		{
			if (*s1 == *s2_pos)
				++s2_pos;
			else if (*s2_pos == '\0')
				return s2_start_s1;
			else if (*s1 != *s2_pos)
			{
				inString = false;
				s2_pos = s2;
				continue;
			}
		}
		else if (!inString && *s1 == *s2_pos)
		{
			inString = true;
			s2_start_s1 = s1;
			++s2_pos;
		}
		++s1;
	}
	return NULL;
}
