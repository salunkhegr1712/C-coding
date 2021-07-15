#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *base;
};
void input(struct myarray*a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->base=(int*)malloc(tsize*sizeof(int));
}
void givevalue(struct myarray*a){
    for(int i=0;i< a->used_size;i++){
        printf("enter the number \n");
        scanf("%d",&(a->base)[i]);
    }
}
void printno(struct myarray*a){
    for(int i=0;i<(a->used_size);i++){
        printf("the nos are %d \n",(a->base)[i]);
    }

}
int main()
{
    struct myarray marks;
    input(&marks,10,8);
    givevalue(&marks);
    printno(&marks);

	return 0;
}
