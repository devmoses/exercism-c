#include <stdio.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) 
{
	if(phrase == NULL) return false;
	int A[26] = {0}, x = 0;
	for(int i = 0; phrase[i] != 0; i++)
	{
		if(tolower(phrase[i]) >= 97 && tolower(phrase[i]) <= 122) 
		{
			x = (tolower(phrase[i])-97) % 26;
		  A[x] += 1;
		  if(A[x] > 1) return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	printf("%s", is_isogram(NULL) ? "true" : "false");
	return 0;
}