#include<stdio.h>
#include<stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node *pointer;
};

typedef struct Node node;//giving a nick name for the struct

//create a three pointer varibles..
node *head=NULL;
node *newnode=NULL;
node *linker=NULL;

void insert(int data)//inserting the data using this function...
{
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;

    }
    else
    {
        linker->pointer=newnode;

    } 
    linker=newnode;


}
void randomdelete(int index)
{
    struct Node *t = head;

    int i = 0;

    while((i < index - 1) && (t != NULL))
    {
        // going to next node -> just like i++ in for loop 
        t = t->pointer;
        i ++;
    }

    struct Node *temp;

    temp = t->pointer; // temp will point to 2
    t->pointer = temp->pointer; // storing 3's address in 1's pointer
    free(temp); // deleting temp

}

void deleteinsert(int index)
{
    struct Node *t = head;

    int i = 0;

    while((i < index - 1) && (t != NULL))
    {
        // going to next node -> just like i++ in for loop 
        t = t->pointer;
        i ++;
    }

    struct Node *temp;

    temp = t->pointer; // temp will point to 2
    t->pointer = temp->pointer; // storing 3's address in 1's pointer
    free(temp); // deleting temp

}
void main()
{
    for(int i=0;i<=3;i++)
    {
        insert(i);
    }
}

