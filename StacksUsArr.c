/*
Name:K.Pavani
ID:N190061
class:CSE-03
date:12-07-2022
Purpose:Program to perform push , pop and peek operations on a stack using arrays
*/

#include<stdio.h>
int stack[100],n,choice,top,x,i;
void push(void);
void pop(void);
void display(void);
void Peek(void);
int main()
{
    top=-1;
    printf("\n Enter the size of STACK : ");
    scanf("%d",&n);
    printf("\n STACK OPERATIONS USING ARRAY");
    do
    {
    	  printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.PEEK \n 5.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            	{Peek();
            	break;
					}
            case 5:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=5);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
} 
void Peek()
{ if (top<=-1)
   printf("\n stack is under flow");
   else
   printf("the top of the stack is %d",stack[top]);
	}
