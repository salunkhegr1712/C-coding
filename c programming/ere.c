#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr=fopen("xyz.txt","w");
    printf("%c",ptr);
    printf("%c",ptr);
    printf("%c",ptr);
    fclose(ptr);
	return 0;
}
