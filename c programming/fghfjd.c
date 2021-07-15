#include<stdio.h>
int main()
{
    char ans = 'n';

while (ans != 'Y' && ans != 'y'){

	printf("Will you pass this exam?\n");
	scanf("%c\n",&ans);
    }

    printf("Great!!");


    return 0;
}
