#include<stdio.h>
f(int n);
int main()
{
    int a,i=1;
    printf("enter the limit of numbers in series \n");
    scanf("%d",&a);
    while(i<=a){
        printf("the %d element of series is %d \n ",i,f(i));
        i++;
    }
	return 0;
}
f(int n){
    if(n==1){
        return 0;
    }
   else if(n==2){
        return 1;
    }
    else{
        return f(n-2)+f(n-1);
    }
}
