#include<stdio.h>
int main()
{
    float tax;
    double pay =4566;
    char a='s';

    if(a== 'S'){
        tax = 1 * pay;
        printf("%f\n",tax);
        printf("%2f" "%d\n",pay,sizeof(pay));
    }
    else{
        tax = 2 * pay;
        printf("%f \n",tax);
        printf("%2f\n" "%d",pay,sizeof(pay));

    }
	return 0;
}
