#include<stdio.h>
//part a
int main()
{
    char letter;
    printf("enter the alphabet ");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
        printf("%c is an vowel",letter);
    }
    else{
        printf("%c is an consonent",letter);
    }
	return 0;
}
//OUTPUT
//enter the alphabet a
//a is an vowel
//Process returned 0 (0x0)   execution time : 1.988 s
//Press any key to continue.


//enter the alphabet h
//h is an consonent
//Process returned 0 (0x0)   execution time : 1.648 s
//Press any key to continue.
//Press any key to continue.


