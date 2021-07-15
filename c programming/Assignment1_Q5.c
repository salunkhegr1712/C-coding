#include<stdio.h>
int main()
{
    int a;
    printf("enter the number= \n");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid");
            break;
    }
	return 0;
}
//OUtput
//enter the number=
//1
//Monday
//Process returned 0 (0x0)   execution time : 2.320 s
//Press any key to continue.

//enter the number=
//5
//Friday
//Process returned 0 (0x0)   execution time : 2.320 s
//Press any key to continue.

