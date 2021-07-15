#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number = \n");
    scanf("%d",&a);
    printf("enter second number = \n");
    scanf("%d",&b);
    if(a > b){
        printf("%d is bigger among two",a);
    }
    else{
        printf("%d is bigger among two",b);
    }

	return 0;
}
