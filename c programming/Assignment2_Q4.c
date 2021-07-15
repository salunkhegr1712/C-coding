//4. Write a C program to accept a decimal number (Base 10) and convert it
//to binary and count the number of 1's in the binary number

#include<stdio.h>
int main()
{
    int n,b,num,d=0;
    char a;
   printf("enter the number \n");
    scanf("%d",&n);
    while(n!=0){
        b=n%2;
        n=n/2;
        d=(d*10)+b;
    }
    printf("%d \n",d);
	return 0;
}
