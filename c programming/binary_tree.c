#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*create_node(int data){
    struct node*n=malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n ;
};
void preOrder(struct node* ptr){

    if(ptr!=NULL){
        printf("%d ",ptr->data);
        preOrder(ptr->left);
        preOrder(ptr->right);
    };
};
void postOrder(struct node*ptr){
    if(ptr!=NULL){
    
        postOrder(ptr->left);
        postOrder(ptr->right);
        printf("%d ",ptr->data);
    };
};
void inOrder(struct node*ptr){
    if(ptr!=NULL){
    
        inOrder(ptr->left);
        printf("%d ",ptr->data);
        inOrder(ptr->right);
        
    };
};
int main(){
    struct node*root=create_node(10);
    struct node*r1=create_node(20);
    struct node*r2=create_node(30);
    struct node*r11=create_node(40);
    struct node*r12=create_node(50);
    struct node*r21=create_node(60);
    struct node*r22=create_node(70);
//         10
//        /   \
//     20       30
//     / \     / \
//    40 50   60 70
    root->left=r1;
    root->right=r2;
    r1->left=r11;
    r1->right=r12;
    r2->left=r21;
    r2->right=r22;
    printf("The Preorder Travasal is ::\n");
    preOrder(root);
    printf("\n");
    printf("The Postorder Travasal is ::\n");
    postOrder(root);
    printf("\n");
    printf("The inorder Travasal is ::\n");
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
   
    return 0;
}