#include <stdio.h>
#include <stdlib.h>
#define maxsize 5

void insert();
void delete ();
void display();
int front = -1, rear = -1;
int queue[maxsize];

void main()
{
    int choice;
    printf("\n\t***************Main Menu***************");
    printf("\n\t=======================================");
    while (choice != 4)
    {
        printf("\n\t1. Insert an Element.\n\t2. Delete an Element.\n\t3. Display Queue.\n\t4. Exit.");
        printf("\n\tEnter your choice:-");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display() ;
            break;
        case 4:
            printf("\t ~~SEE YOU SOON~~");
            break;
        default:
            printf("\n~~Enter valid choice~~\n");
        }
    }
}

void insert(){
    int item;
    if (rear == (maxsize - 1))
    {
        printf("\t\tOVERFLOW\n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    printf("\t\tEnter the element:-");
    scanf("%d", &item);
    queue[rear] = item;
    printf("\t\t\tValue Inserted SUCCESSFULLY.\n");
}

void delete(){
    int item;
    if (front == -1 || front > rear)
    {
        printf("\t\tUNDERFLOW\n");
        return;
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        printf("\t\tValue Deleted SUCCESSFULLY. \n");
    }
}

void display(){
    int i;
    if (rear == -1)
    {
        printf("\t\tEmpty queue\n");
    }
    else
    {
        printf("\n\t\tPrinting Values.....\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d  ", queue[i]);
        }
    }
}