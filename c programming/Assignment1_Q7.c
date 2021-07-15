#include<stdio.h>
int main()
{
    float Tf,Tc,gh;
    gh=0.555556;
    printf("enter the tempreture in fehreheit \n");
    scanf("%f",&Tf);
    Tc=gh*(Tf-32);
    printf("Tempreture is %f",Tc);
	return 0;
}
//OUTput
//enter the tempreture in fehreheit
//212
//Tempreture is 100.000076
