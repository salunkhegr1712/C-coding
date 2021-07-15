//Write a C program to find out the size of variables of different data types (use sizeof() operator) and display their size as output
#include<stdio.h>
int main()
{
    double a;
    int b;
    char c='d';
    printf("enter the doble no = \n");
    scanf("%d",&a);
    printf("enter the int no = \n");
    scanf("%d",&b);
    printf("size of variable a is= %d \n",sizeof(a));
    printf("size of variable b is= %d \n",sizeof(b));
    printf("size of variable c is= %d \n",sizeof(c));

	return 0;

//Output
//enter the doble no =
//55455
//enter the int no =
//44452452
//size of variable a is= 8
//size of variable b is= 4
//size of variable c is= 1

