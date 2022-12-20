#include <stdio.h>
#include <stdlib.h>

// implementing stack using single linked list

struct node
{
    int data;
    struct node *next;
};
struct node *ptr = NULL, *head = NULL, *cptr = NULL;

// create node!!!
void insert_from_end()
{
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter the data!!!!!!!");
    scanf("%d", &ptr->data);
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        cptr->next = ptr;
    }
    cptr = ptr;
}
void display()
{
    struct node *ankitha;
    ankitha=head;
    while(ankitha!=NULL)
    {
        printf("%d",ankitha->data);
        ankitha=ankitha->next;
    }
}
void del()
{
    struct node *ankitha;
    ankitha=head;
    while(ankitha->next->next!=NULL)
    {
        ankitha=ankitha->next;//imcremented 
    }
    cptr=ankitha;
    free(ankitha->next);
}
void main()
{
    int n;
    printf("enter the size...\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        insert_from_end();
    }
    display();
    printf("after deleting from end\n");
    del();
    display();
}
