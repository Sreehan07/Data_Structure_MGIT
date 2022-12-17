// Write a program to create linked list
#include<stdio.h>
#include<stdlib.h>

// 1) Create a node
// 1.a) Create a struct
// 1.a) Why do we need to create struct? -> Struct stores multiple data types in one memory
struct node
{
    int data; // char data, // float data,

    // This variable allows us to point to the next node [points to the down stream fellow] [nee pakkana vodu]
    struct node *link; // pointer // next
};

// 2) Create pointers
// 2.a) Why do we need pointers? -> Pointers help us to point to memory
struct node *head = NULL, *newnode = NULL;

// 3) Create dynamic memory
// 3.a) Why do we need dynamic memory? -> Cause to save memory / to utilize memory properly / arey memory waste cheyaku
void insert_from_end(); // function declaration

void insert_from_end() // function declaration
{
    // 1) Create memory using malloc
    newnode = (struct node*) malloc(sizeof(struct node));

    // 2) Insert data into node
    // *(newnode).data;
    printf("Enter the data:\n");
    // scanf("%d",&newnode->data);
    newnode->data = 20;
    newnode->link = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        // MGIT
        struct node *temp = head;
        while(temp->link != NULL)
        {
            temp = temp->link; // temp moves forward
        }
        temp->link = newnode;
    }
}
void insert_from_start()
{
    
    // 1) Create memory using malloc
    newnode = (struct node*) malloc(sizeof(struct node)); 

    // 2) Insert data into node
    // *(newnode).data;
    printf("Enter the data:\n");
    // scanf("%d",&newnode->data);
    newnode->data = 10;
    newnode->link = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->link = head;
        head = newnode;
    }
}

void insert_between(int index)
{

    // 1) Create memory using malloc
    newnode = (struct node*) malloc(sizeof(struct node));

    // 2) Insert data into node
    // *(newnode).data;
    printf("Enter the data:\n");
    // scanf("%d",&newnode->data);
    newnode->data = 30;
    newnode->link = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        int counter = 0;
        struct node *temp = head;
        while(counter != index && temp != NULL)
        {
            temp = temp->link;
            counter ++;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
}
void display()
{
    struct node *temp = head;
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
void random_delete(int index)
{
    if(head == NULL)
    {
        printf("Bhai linked list empty hai");
    }
    else
    {
        int counter = 0;
        struct node *temp;
        while(temp && counter != index)
        {
            temp = temp->link;
        }
        struct node *delete;
        delete = temp->link;
        temp->link = temp->link->link;
        free(delete);
    }

}

void delete_from_start()
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("Bhai linked list empty hai");
    }
    else
    {
        head = head->link;
        free(temp);
    }
}

void delete_from_end()
{
    if(head == NULL)
    {
        printf("Bhai linked list empty hai");
    }
    else
    {
        struct node *temp = head;
        while(temp->link)
        {
            temp = temp->link;
        }

        free(temp);
    }

}

void main()
{
    insert_from_start();
    insert_from_end();
    insert_between(0);
    display();
}