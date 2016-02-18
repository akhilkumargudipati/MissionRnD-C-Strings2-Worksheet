/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stddef.h>
#include<malloc.h>
char * get_last_word(char * str)
{
	if (str == NULL)
		return NULL;

	int start = 0, cur = 0;
	while (str[++cur] != '\0')
		if (str[cur - 1] == ' ' && str[cur] != ' ')
			start = cur;

	char *lastword;
	lastword = (char *)malloc((cur - start) * sizeof(char));
	cur = 0;

	while (str[start] != '\0' && str[start] != ' ')
		lastword[cur++] = str[start++];
	lastword[cur] = '\0';

	return lastword;
}
