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
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++){
		int j;
		for (j = 0; word[j] != '\0'; j++)
			if (str[i + j] != word[j])
				break;
		if (word[j] == '\0')
			count++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

