//the sum of n natural numbers
// by the for loop

#include<stdio.h>
int main()
{
    int i,a,sum=0;
    printf("enter the n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("sum is = %d",sum);
	return 0;
}
