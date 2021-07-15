#include<stdio.h>
int main(){
    int a;
    printf("enter the no \n");
    scanf("%d",&a);
    if(a > 0){
        printf("the no %d is postive \n",a);
    }
    else if(a < 0){
        printf("the no %d is negative \n",a);

    }
    else{
        printf("the given no %d is zero \n",a);
    }
}
