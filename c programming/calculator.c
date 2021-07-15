#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 102

typedef struct
{
    char stk[MAXSIZE];
    int top;
}STACK;

typedef struct stack
{
    int stk[MAXSIZE];
    int itop;
}INT_STACK;

STACK s;
INT_STACK a;
void push(char);
char  pop(void);
void display(void);

int main()
{
  a.itop = 0;
  char string[MAXSIZE],vyb,vyb2;
  int cislo1,cislo2,vysledok;

  while (gets(string) != NULL){
    for(int j = strlen(string); j > 0; j--){
      if(string[j] == '*' || string[j] == '/' || string[j] == '+' || string[j] == '-')
        push(string[j]);
    }

    //display();
    for(int j = 0; j < strlen(string); j++){
      if(isdigit(string[j])&&!(a.itop)){
        //display();
        char pomoc[2];
        pomoc[0] = string[j];
        pomoc[1] = '\0';
        int_push(atoi(pomoc));
      }
      else if(isdigit(string[j])&&(a.itop)){
         cislo1 = int_pop();
         vyb2 = pop();
         char pomoc[2];
         pomoc[0] = string[j];
         pomoc[1] = '\0';
         cislo2 =  atoi(pomoc);
         if(vyb2 == '+')
            vysledok = cislo1+cislo2;
         else if(vyb2 == '-')
            vysledok = cislo1-cislo2;
         else if(vyb2 == '*')
            vysledok = cislo1*cislo2;
         else if(vyb2 == '/')
            vysledok = cislo1 / cislo2;
         //printf("  v   %d",vysledok);
         int_push(vysledok);
      }
    }
    printf("%d\n",int_pop());
  }
}

/*  Function to add an element to the stack */
void push (char c)
{
    s.top++;
    s.stk[s.top] = c;
    //printf ("pushed element is = %c \n", s.stk[s.top]);
}

/*  Function to delete an element from the stack */
char pop ()
{
    char num = s.stk[s.top];
   // printf ("poped element is = %c\n", s.stk[s.top]);
    s.top--;
    return(num);
}

int empty()
{
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    return 1;
}

void display ()
{
    int i;
    if (!empty)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%c\n", s.stk[i]);
        }
    }
    printf ("\n");
}

void int_push (int c)
{
    a.itop++;
    a.stk[a.itop] = c;
    //printf ("pushed element is = %d \n", a.stk[a.itop]);
}

/*  Function to delete an element from the stack */
int int_pop ()
{
    int num = a.stk[a.itop];
   // printf ("poped element is = %d\n", a.stk[a.itop]);
    a.itop--;
    return(num);
}
