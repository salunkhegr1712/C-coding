#include<stdio.h>
int main()
{
    int a;
    char ch='A';
    printf(" the ascii values of small alphabets are as follow \n");
    for(ch;ch<='z';ch++){
        a=("%d",ch);
        if(a==91||a==92||a==93||a==94||a==95||a==96){
            continue;}
        else{printf("the ascii value of %c is",ch);
        printf("%d \n",ch);
        }


    }
}
