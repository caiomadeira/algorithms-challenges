#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* allocStr(int n)
{
	char* buff = (char*)malloc(n * sizeof(char) + 1);
	if (buff == NULL)
		return buff;
	return buff;
}

// Not used
int countWhiteSpaces(char* s, int count)
{
	if (*s == '\0')
	{
		return 0;
	}

	if (count == 0 && s[0] == ' ')
	{
		return 1 + countWhiteSpaces(s + 1, count);
	}
	else
	{
		count++;
		if (*(s + 1) == ' ')
		{
			return 1 + countWhiteSpaces(s + 1, count);
		}
		else
		{
			return countWhiteSpaces(s + 1, count);
		}
	}
}

char * longestWord(char *s)
{
	int i;
	int pos = -1;
	int start = 0;
	int longW = 0;
	int longPos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			start = i + 1;
			pos = -1;
			//printf("start: %d\n", start);
		}
		else
		{
			pos++;
			if (pos > longW)
			{
				longPos = start;
			}

		}
	}

	return s + longPos;
}


int main(void)
{
	char A[] = "You love music and donuts.";

	char* s = allocStr(strlen(A));
	s = longestWord(A);

	printf(">longest word: %s\n", s);

	return 0;
}