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
    newnode->data=data;//data is going to new 
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
void main()
{
    for(int i=0;i<=3;i++)
    {
        insert(i);
    }
}


