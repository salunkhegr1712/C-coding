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
//create a function who see that a binary tree is 
//a BST or not
int isBst(struct node*root){
    static struct node*prev=NULL;
    if(root!=NULL){
        //check left subtree is exist or not
        if(!isBst(root->left)){
            return 0;
        }
        //here we check that prev is null or not if it is not so it 
        //hold previous value that of root 
        //here we solving it by the inorder ascending pr0perty
        if(prev!=NULL && root->data <= prev->data ){
            return 0;
        }
        prev=root;
        return isBst(root->right);

    }
    //if it was a node only so it is BST 
    else
        return 1;
    
};
void preOrder(struct node*ptr){

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
int main(){
    struct node*root=create_node(40);
    struct node*r1=create_node(20);
    struct node*r2=create_node(60);
    struct node*r11=create_node(10);
    struct node*r12=create_node(30);
    struct node*r21=create_node(50);
    struct node*r22=create_node(70);
//         40
//        /   \
//     20       60
//     / \     / \
//    10 30   50 70
    root->left=r1;
    root->right=r2;
    r1->left=r11;
    r1->right=r12;
    r2->left=r21;
    r2->right=r22;
   
 
    printf("%d\n",isBst(root));
   
    return 0;
}