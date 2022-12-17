#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node *next;
 };

 struct node *head,*linker,*newnode;

 void insert(int data)
 {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        linker->next=newnode;//linker 
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