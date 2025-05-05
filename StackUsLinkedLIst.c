/*
Name:K.Pavani
ID:N190061
class:CSE-03
date:12-07-2022 
Purpose:Stack implementation using linked list
*/

#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();
void Peek();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n***Stack operations using linked list***\n");  
    do  
    {   
        printf("\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.Exit");  
        printf("\n Enter your choice:");        
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
				{ 
				  Peek();
				  break;
				}  
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}while(choice!=5); 
}
// top is at beginning  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("Not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
} 
void Peek()
{ 
 if(head==NULL)
 printf("\nStack is under flow\n");
 else
 printf("\nthe top of the stack is %d\n",head->val);
 } 
