#include<stdio.h>
int main()
{
    float salary;
    printf("enter the salary= \n");
    scanf("%f",&salary);
    if(20000>=salary && salary>= 10000){
        printf("DA for salary is :: %f",0.1*salary);
    }
    else if(50000>=salary && salary>20000){
        printf("DA for salary is :: %f",0.15*salary);
    }
	else if(100000>=salary && salary> 50000){
        printf("DA for salary is :: %f",0.2*salary);
	}
	else{
        printf("the DA for your salary is not available");
	}
	return 0;

}
//Output
//enter the salary=
//85624
//DA for salary is :: 17124.800000
//Process returned 0 (0x0)   execution time : 6.781 s
//Press any key to continue.

