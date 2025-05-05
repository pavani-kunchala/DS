/*
Name:K.Pavani
ID:N190061
class:CSE-03
date:18-07-2022
Purpose: C Program to Implement Queue using an Array    
*/

#include <stdio.h>
#include<stdlib.h>

#define MAX 50

void insert();
void delete();
void display();
int peek();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display the element at the front\n");
        printf("4.Display all elements of queue\n");
        printf("5.Quit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            printf("\nElement at the front of the queue is %d\n", peek() );
            break;
            case 4:
            display();
            break;
            case 5:
            exit(1);
            default:
            printf("\nWrong choice \n");
        } /*End of switch*/
    } /*End of while*/

    return 0;

} /*End of main()*/
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("\nInset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /*End of insert()*/

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("\nQueue Underflow \n");
        return ;
    }
    else
    {
        printf("\nElement deleted from queue is : %d\n",queue_array[front]  );
        front = front + 1;
    }
} /*End of delete() */
 
int peek()
{
        if( front==-1)
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_array[front] ;
}/*End of peek()*/

void display()
{
    int i;
    if (front == - 1)
        printf("\nQueue is empty \n");
    else
    {
        printf("\nQueue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

