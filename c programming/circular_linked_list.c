//mis_111903033
//practocle question 2
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node*head){
    struct node*ptr=head;
    do{
        printf("element is::%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node*insertion_at_start(struct node*head,int data){
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p;
    p=head->next;
    while(p!=head){
        p=p->next;
    }
    ptr->next=p->next;

    p->next=ptr;
    head=ptr;
    return ptr;
};
int main()
{
    //declaration
    struct node*head;
    struct node*second;
    struct node*third;
    //rerserve memory in heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    //assign values and providing addres of next node

    head->data =23;
    head->next=second;
    second->data =33;
    second->next=third;
    third->data =43;
    third->next=head;
    display(head);//to display output of new linked list
    head=insertion_at_start(head,13);
    printf("\n");
    display(head);

	return 0;
}
