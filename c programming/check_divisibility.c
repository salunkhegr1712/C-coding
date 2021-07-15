#include<stdio.h>
int main()
{
    int a;
    printf("enter the no \n");
    scanf("%d",&a);
    if(a % 5==0 && a % 11==0){
        printf("the no %d is divisible by 5 and 11 \n");

    }
    else if(a%5==0){
        printf("the no is divisible by 5 but not by 11 \n");

    }
    else if(a%11==0){
        printf("the no is divisible by 11 but not by 5 \n");
    }
	return 0;
}
