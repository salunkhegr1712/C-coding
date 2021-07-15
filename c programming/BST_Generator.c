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
void input(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("enter value :\n");
        scanf("%d", &arr[i]);
    }
}
void display(int arr[],int size){
    for(int j=0;j< size; j++){
        printf("Element %d is :%d\n ",j+1,arr[j]);
    }
}
int isbst(struct node*node){
    if (node ==NULL)
        return 1;
    if (node->left!=NULL && node->left->data >node->data)
        return -1;
    if (node->right!=NULL && node->right->data < node->data)
        return -1;
    if (node->left!=NULL && node->left->data >node->data)
        return -1;
    if (!isbst(node->left) || !isbst(node->right))
        return -1;
    
    return 1;
};
void insertion(struct node *p, int val){
    struct node*prev;
    while(p != NULL){
        prev=p;
        if(p->data == val){
            return;
        }
        else if(p->data > val){
            p=p->left;
        }
        else
            p=p->right;
    }
    struct node*n= create_node(val);
    if(prev->data > val)
        prev->left=n;
    else
        prev->right=n;

}
struct node*insert(struct node*ptr,int arr[],int size){
    input(arr,size);
    for(int i=0;i< size;i++){
        insertion(ptr,arr[i]);
    }
    return ptr;

}
void inOrder(struct node*ptr){
    if(ptr!=NULL){
    
        inOrder(ptr->left);
        printf("%d ",ptr->data);
        inOrder(ptr->right);
        
    };
};
void preOrder(struct node*ptr){
    if (ptr!=NULL){
        printf("%d ",ptr->data);
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
void postOrder(struct node*ptr){
    if(ptr!=NULL){
        postOrder(ptr->left);
        postOrder(ptr->right);
        printf("%d ",ptr->data);
    };
};

int main(){
    int size;
    printf("enter size:\n");
    scanf("%d",&size);
    int arr[size];
    struct node*root=create_node(10);
    root=insert(root,arr,size);
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n%d",isbst(root));

//         40
//        /   \
//     20       50
//     / \     / \
//    10 30   60 70
    return 0;
}