//author=Ghanasham R salunkhe
//mis-111903033
//division 1
//steps;
//1.create a code which convert the infix expression to postfix expression
//2.find solution of the postfix equation

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[30];
int top1 = -1;

struct node{
    char data;
    struct node *next;
};
struct node*top=NULL;
struct node *pstart=NULL;
/*-------------------- insertion in postfix expression linked list -------*/
void push_1(int x)
{
    stack[++top1] = x;
}

int pop_1()
{
    return stack[top1--];
}
void insert(char ch){
    struct node *t,*baby;
    baby=(struct node *)malloc(sizeof(struct node));
    baby->next=NULL;
    baby->data=ch;
    t=pstart;
    if(pstart==NULL)
    {
    pstart=baby;
    }
    else{
    while(t->next!=NULL)
    t=t->next;
    t->next=baby;
    }
    //printf(" inserted in list- %c",baby->data);

}
/* --------- push operation ------- */
void push (char symbol){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=symbol;
    if(top==NULL){
     top=p;
     p->next=NULL;
    }
    else
    {
    p->next=top;
    top=p;
    }
}
char  pop(){
    struct node *x,*y;
    char k;
    if(top==NULL){
        printf("stack underflow\n");
        return 0;
    }
    else{
        x=top;
        top=top->next;
        k=x->data;
//printf("node %d is deleted\n",top->data);
        free(x);
        x=NULL;
        return k;
    }
}


void displaypost()
{
    struct node *to;
    if(pstart==NULL)
        printf("");
    else{
        to=pstart;
        while(to!=NULL){
        printf("%c",to->data);
        to=to->next;
        }
    }
}
/*============== precedence selector ================= */
int precedence(char ch){

    if(ch=='^')
    return (5);
    else if(ch=='*' || ch== '/')
    return (4);
    else if (ch== '+' || ch== '-')
    return (3);
    else
    return (2);
}
/*=================== infix to postfix conversion ================ */
void intopost(char infix[])
{
    int len;
    int index=0;
    char symbol,temp;
    len= strlen(infix);
    //printf("%d",len);
    while(len>index){
        symbol=infix[index];
        switch(symbol){
        case '(':
        push(symbol);
        break;
        case ')':
        temp=pop();
        while(temp!='(')
        {
        insert(temp);
        temp=pop();
        }
        break;

        case '^':
        case '+':
        case '-':
        case '*':
        case '/':
        if(top==NULL){
            push(symbol);
    //      break;
        }
        else{
        while(top!=NULL && (precedence(top->data)>=precedence(symbol)))
        {
            temp=pop();
            insert(temp);
        }
        push(symbol);

        }
        break;
        default:
        insert(symbol);

         }
         index=index+1;
    }
    while(top!=NULL){
    temp=pop();
    insert(temp);
    }
    //displaypost();
    return;
}
void postfix_evaluation(char e[]){
    int num,n1,n2,n3;
    int k=0;

    while(e[k] != '\0')
    {
        if(isdigit(*e))
        {
            num = e[k] - 48;
            push_1(num);
        }
        else
        {
            n1 = pop_1();
            n2 = pop_1();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push_1(n3);
        }
        e++;
    }
    printf("\nThe result of expression  =  %d\n\n",pop_1());

}



int main(){
    char infix[50];
    system("clear");
    printf("enter infix expression: ");
    gets(infix);

    //printf("\n\n equivalent postfix expression is---> ");
    intopost(infix);
    getchar();
    char s[20];
    int m=0;
    struct node*sp;
    sp=pstart;
    while(sp->next!=NULL){
        s[m]=sp->data;
        sp=sp->next;
        m++;
    }
    s[m]=sp->data;
    printf("Postfix expression is=");
    for(int n=0;n<=m;n++){
        printf("%c",s[n]);
    }
    postfix_evaluation(s);

    return 0;
}
