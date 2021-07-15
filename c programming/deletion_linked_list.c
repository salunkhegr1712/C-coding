#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    };
void display(struct node*x){
    while(x!=NULL){
        printf("element: %d \n",x->data);

        x=x->next;
    }
    printf("\n");
}
struct node*delete_first_node(struct node*head){
    struct node*q;
    head=head->next;
    free(q);
    return head;

}
struct node*delete_index_node(struct node* head,int index){
    struct node*ptr;
    struct node*q;
    ptr=head;
    int i=0;
    while(i=index-1){
        ptr=ptr->next;
    }
    q=ptr->next;
    ptr->next= q->next;
    free(q);
    return head;

};
int main()
{
    //declaration
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    //rerserve memory in heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //assign values and providing addres of next node

    head->data =23;
    head->next=second;
    second->data =33;
    second->next=third;
    third->data =43;
    third->next=fourth;
    fourth->data =88;
    fourth->next=NULL;
    display(head);
    //head=delete_first_node(head);
    head=delete_index_node(head,2);
    display(head);
	return 0;
}
