/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
	int temp = -1;
	*consonants = *vowels = 0;
	if (str == NULL)
		return;
	while (str[++temp] != '\0') 
	{
		if (str[temp] == 'a' || str[temp] == 'e' || str[temp] == 'i' || str[temp] == 'o' || str[temp] == 'u' || str[temp] == 'A' || str[temp] == 'E' || str[temp] == 'I' || str[temp] == 'O' || str[temp] == 'U')
			*vowels += 1;
		else if ((str[temp] >= 'a' && str[temp] <= 'z') || (str[temp] >= 'A' && str[temp] <= 'Z'))
			*consonants += 1;
	}
}

