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
    n->right=NULL;
    n->left=NULL;
    return n;
}
int max(int val1, int val2 ){
    if(val1 >val2)
        return val1;
    else
        return val2;
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
int maxheight(struct node*node){
    if(node==NULL)
        return -1;
    else{
        return max(maxheight(node->left),maxheight(node->right))+1;
    }

}
void insertion(struct node*ptr,int data){
    struct node*prev;
    
    while(ptr!=NULL){
        prev=ptr;
        if(ptr->data==data)
            return;
        else if(ptr->data > data)
            ptr=ptr->left;
        else
            ptr=ptr->right;    
    }
    struct node*n=create_node(data);
    if (prev->data > data)
        prev->left=n;
    else
        prev->right=n;    
}
void inorder(struct node*ptr){
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }   
}
void preorder(struct node*ptr){
    if(ptr!=NULL)
    {   printf("%d ",ptr->data);
        preorder(ptr->left);;
        preorder(ptr->right);
    }   
}
void postorder(struct node*ptr){
    if(ptr!=NULL)
    {  
        postorder(ptr->left);;
        postorder(ptr->right);
      printf("%d ",ptr->data);
    } 
}
int biggest(struct node*node){
    struct node*cur=node;
    if(node==NULL)
        return 0;
    else{
        while (node->right!=NULL)
        {
            node=node->right;
        }
        return node->data;
    } 
}
int smallest(struct node*node){
    struct node*cur=node;
    if(node==NULL)
        return 0;
    else{
        while (node->left!=NULL)
        {
            node=node->left;
        }
        return node->data;
    } 
}
int search1(struct node*ptr,int val){
    struct node*v;
    v=ptr;
    while(v!=NULL){
        if (v->data==val)
            return 1;
        else if(v->data >val)
            v=v->left;
        else
            v=v->right;
        }
    return -1;
}
void search(struct node*ptr,int val){
    if(search1(ptr,val)==1){
        printf("\nelement found");
    }
    else    
        printf("\nelement found");
}
void check_bst(struct node*ptr){
    if(isbst(ptr)==1){
        printf("\nthis is BST");
    }
    else    
        printf("\nthis is not BST");
}

void level_print(struct node*node,int level){
    if(node==NULL)
        return;
    else if(level==0)
        printf("%d ",node->data);
    else{
        level_print(node->left,level-1);
        level_print(node->right,level-1);
    }   
}
void level_order_trav(struct node*node){
    int i=maxheight(node);
    int j=0;
    for(j;j<i;j++){
        printf("\nLEVEL %d\n",j);
        level_print(node,j);
    }
}
struct node*insert(struct node*ptr,int arr[]){
    int size;
    printf("enter size::");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("enter value :\n");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i< size;i++){
        insertion(ptr,arr[i]);
    }
    return ptr;
}
struct node* minValueNode(struct node* node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
 
/* Given a binary search tree and a data, this function
deletes the data and returns the new root */
struct node* deleteNode(struct node* root, int data)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the data to be deleted is
    // smaller than the root's
    // data, then it lies in left subtree
    if (data < root->data)
        root->left = deleteNode(root->left, data);
 
    // If the data to be deleted is
    // greater than the root's
    // data, then it lies in right subtree
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
 
    // if data is same as root's data, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL && root->right==NULL)
            return NULL;
       
        // node with only one child or no child
        else if(root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->data = temp->data;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int sum(struct node*root){
    if(root==NULL)
    return;
    else{
        return root->right->data - root->left->data;
    }
}
int sum_absolute_diff(struct node*root){
    
    int sum1=0;
    sum1=sum(root->right)+sum(root->left);
    return sum1;

}
int main(){
    struct node*root=create_node(40);
    int arr[10];
    insert(root,arr);
    printf("\n");
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\nbiggest is:: %d",biggest(root));
    printf("\nsmallest is:: %d",smallest(root));
    search(root,11);
    check_bst(root);
    printf("\nheight of tree is:: %d",maxheight(root));
    printf("\n");
    level_order_trav(root);
    deleteNode(root,30);
    printf("\n");
    inorder(root);
    
    return 0;
}