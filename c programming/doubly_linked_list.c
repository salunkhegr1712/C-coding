#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
void display_top_to_bottom(struct node*head){
    while(head->next!=NULL){
        printf("element is:: %d\n",head->data);
        head=head->next;
    }
    printf("element is:: %d",head->data);

}
void display_bottom_to_top(struct node*head){
    while(head->prev!=NULL){
        printf("element is:: %d\n",head->data);
        head=head->prev;
    }
    printf("element is:: %d",head->data);

}
int main()
{
    struct node*head=malloc(sizeof(struct node));
    struct node*second=malloc(sizeof(struct node));
    struct node*third=malloc(sizeof(struct node));
    struct node*fourth=malloc(sizeof(struct node));
    struct node*last=malloc(sizeof(struct node));

    head->data=22;
    head->prev=NULL;
    head->next=second;
    second->data=224;
    second->prev=head;
    second->next=third;
    third->data=223;
    third->prev=second;
    third->next=fourth;
    fourth->data=2543;
    fourth->prev=third;
    fourth->next=last;
    last->data=233254;
    last->prev=fourth;
    last->next=NULL;

    display_top_to_bottom(head);

    printf("\n");
    printf("\n");
    display_bottom_to_top(last);

	return 0;
}
