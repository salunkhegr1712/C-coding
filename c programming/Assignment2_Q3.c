//Write a C Program to find sum of digits at even location in a given number. Digits are numbered from 0 to n-1 from right to left. (For e.g., user entered 54823 so sum of 5+8+3 = 16)
#include<stdio.h>
int main()
{
    int v,n,a,b=0,m,sum=0;
    printf("enter the number= \n");
    scanf("%d",&a);
    v=a;
    n=v/10;
    while(a!=0){
        a=a/10;
        b+=1;
        }

    printf("no of terms in no is %d \n",b);
    if(b%2==1){
        while(v!=0){
            m=v%10;
            v=v/100;
            sum+=m;
        }
    }
    else{
        while(n!=0){
            m=n%10;
            n=n/100;
            sum+=m;
            }
    }

    printf(" sum of even position nos is%d \n",sum);
	return 0;
}
