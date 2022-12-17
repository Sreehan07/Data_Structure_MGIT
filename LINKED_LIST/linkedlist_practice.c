#include<stdio.h>
#include<stdlib.h>

//insertion from end 

//algoritm:
//1.create a struct with varible and pointer varible 
struct node
{
    /* data */
    int data;
    struct node *next;
};
//2.create three pointer varibles
struct node *head=NULL,*linker=NULL,*newnode=NULL;
//3.create a function to insert the values and create memory
void insertion(){
    newnode=(struct node*)malloc(sizeof(struct node));

    //inserting data
    printf("enter the data to insert in the node");
    scanf("%d",&newnode->data);

    //check where there head is empty or not!!!!!!!

    if(head==NULL){
        head=newnode;//pointing the head to newnode
    }
    else{
        linker->next=newnode;
    }
    linker=newnode;//pointing newnode to linker 
}
//create a empty pointer to display the values

void display(){
    struct node *temp;
    temp=head;//pointing the head..
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        
        //temp is pointing to next node..
        temp=temp->next;
    }
}
void main()
{
    for(int i=0;i<5;i++)
    {
        insertion();
    }
    display();
    
}