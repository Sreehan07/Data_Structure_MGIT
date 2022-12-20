#include<stdio.h>
#include<stdlib.h>
//creating linked list 
//create a structure 
struct node{
    int data;
    struct node *next;
};
//create three gloabal pointer variables...
struct node *head=NULL,*tail=NULL,*newnode=NULL;

//insert values by using function
void insert_(int data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        tail->next=newnode;
    }
    tail=newnode;
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {

    }
}
void main()
{
    for(int i=0;i<5;i++)
    {
        insert(i*10);
    }
}