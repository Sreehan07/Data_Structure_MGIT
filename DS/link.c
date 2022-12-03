#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head=NULL;//head= this node will pointer the first node 
node *newnode=NULL;
node *linker=NULL;

void insert(int data)
{
    newnode=(node*)malloc(sizeof(node));
    //sending data into newnode....
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;

    }
    else{
        linker->next=newnode;
    }
    linker=newnode;
}
void main()
{
    for(int i=0;i<=3;i++)
    {
        insert(i*10);
    }
}