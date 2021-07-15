#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xyz.h"
struct queue{
    int size;
    int f;
    int r;
    int*array;
};
int isEmpty(struct queue*s){
    if(s->f==s->r){
        return -1;
    }
    else 
        return 0;
}

int isFull(struct queue*s){
    if((s->r +1) % s->size == s->f){
        return -1;
    }
    else 
        return 0;
}
void display(struct queue*s){

    for(int i=s->f;i!=s->r+1;i++){
        if(s->array[i]==0)
            continue;
        else{
            printf("%d\n",s->array[i]);

        }
    }
}


void inqueue(struct queue *x,int value){
    if(isFull(x)==-1){
        printf("Queue is in ovrflow condition");
    }
    else
    {
        x->r=(x->r+1)% x->size;
        x->array[x->r]=value;
    }
}   
void dequeue(struct queue*ptr){
    if(isEmpty(ptr)==-1)
        printf("the stack is in underflow condition");
    else
    {  
        ptr->f=(ptr->f+1)%ptr->size;
        ptr->array[ptr->f]=0;
    }    
}

int main(){
    struct queue*ptr;
    //ptr=(struct queue*)malloc(sizeof(struct queue));
    ptr->size=7;
    ptr->f=-1;
    ptr->r=-1;
    ptr->array=(int*)malloc(ptr->size*sizeof(int));
    ptr->array[0]=13;
    
    ptr->f=(ptr->f+1)%ptr->size;
    ptr->r=(ptr->r+1)% ptr->size;

    inqueue(ptr,14);
    // dequeue(ptr);
    inqueue(ptr,87);
    inqueue(ptr,88);
    inqueue(ptr,89);
    inqueue(ptr,90);
    dequeue(ptr);
 
    display(ptr);
    return 0;
}