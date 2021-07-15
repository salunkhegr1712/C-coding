#include<stdio.h>
int main()
{   int a;
    printf("enter the no");
    scanf("%d",&a);
    if(a%2==1){
        printf("%d is odd number",a);
    }
    else{
        printf("%d is even number",a);
    }
	return 0;
}
