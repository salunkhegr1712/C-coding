# include <stdio.h>

int main()
{
    int a, b, c, big ;

    printf("Enter three numbers : ") ;

    scanf("%d %d %d", &a, &b, &c) ;

    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;

    printf("\nThe biggest number is : %d", big) ;
    return 0;
}
//OUTPUT
//Enter three numbers : 30
//20
//50
//The biggest number is : 50
//Process returned 0 (0x0)   execution time : 5.921 s
//Press any key to continue.

