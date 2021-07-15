// programme to write the sum of the n natural numbers
//BY WHILE LOOP
#include<stdio.h>
int main()
{
    int i=1,a,sum=0;
    printf("enter the no of natural no's upto which you want to find sum \n");
	scanf("%d",&a);
	while(i<=a){
        sum+=i;
        i++;
	}
	printf("the sum is %d \n",sum);
	return 0;
}
