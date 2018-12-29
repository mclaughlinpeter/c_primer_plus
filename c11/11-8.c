#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char * string_in(const char * s1, const char * s2);
const char * string_in_2(const char * s1, const char * s2);

int main(void)
{
	char array[40] = "0123434556789";
	const char * string = "345";
	const char * ret_val = string_in_2(array, string);
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

const char * string_in_2(const char * s1, const char * s2)
{
	if (*s2 == '\0')
		return NULL;
	for (int i = 0; i < strlen(s1); ++i)
	{
		const char * p1 = &s1[i], * p2 = s2;
		while (*p1 == *p2)
		{
			++p1;
			++p2;
		}
		if (*p2 == '\0')
			return &s1[i];
	}
	return NULL;
}
