/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<stddef.h>
int count_word_in_str_way_1(char *str, char *word)
{
	if (str == NULL || word == NULL)
		return 0;
	int count = 0,temp1;

	for ( temp1 = 0; str[temp1]!= '\0'; temp1++){
		int temp2;
		for (temp2 = 0; word[temp2] != '\0'; temp2++)
			if (str[temp1 + temp2] != word[temp2])
				break;
		if (word[temp1] == '\0')
			count++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

