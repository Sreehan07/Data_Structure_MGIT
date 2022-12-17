#include <stdio.h>
#include <stdlib.h>

// insertion from end

// algoritm:
// 1.create a struct with varible and pointer varible
struct node
{
    /* data */
    int data;
    struct node *next;
};
// 2.create three pointer varibles
struct node *head = NULL, *linker = NULL, *newnode = NULL;
// 3.create a function to insert the values and create memory
//.............................................................................................................
void insertion()
{
    newnode = (struct node *)malloc(sizeof(struct node));

    // inserting data
    printf("enter the data to insert in the node");
    scanf("%d", &newnode->data);

    // check where there head is empty or not!!!!!!!

    if (head == NULL)
    {
        head = newnode; // pointing the head to newnode
    }
    else
    {
        linker->next = newnode;
    }
    linker = newnode; // pointing newnode to linker
}
// create a empty pointer to display the values
//  ..........................................................................................................
void display()
{
    struct node *temp;
    temp = head; // pointing the head..
    while (temp != NULL)
    {
        printf("%d\n", temp->data);

        // temp is pointing to next node..
        temp = temp->next;
    }
}
//..................................................................................................................
void delete_from_start()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head;       // temp is pointing to first node.
        head = head->next; // head is pointing to the next node...
        free(temp);        // deleting the first node
    }
}
void insert_From_start()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the insert value..\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}
void random_insert()
{
    struct node *temp;
    int index;
    int i = 0;
    printf("enter the index values!!\n");
    scanf("%d", &index);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the insert value..\n");
    scanf("%d", &newnode->data);
    temp = head;
    while (temp != NULL && i < index - 1)
    {
        temp = temp->next; // moving the temp to next node untill it reaches the index
        i++;
    }
    newnode->next = temp->next; // storing the address of next node into newnode
    temp->next = newnode;       // linking the address of newnode to temp of next...
}
void random_del()
{
    struct node *temp;
    struct node *temp1;
    int index;
    int i = 0;
    int j=0;
    printf("enter the index values!!\n");
    scanf("%d", &index);
    temp = head;
    
    while (temp != NULL && i < index - 1)
    {
        temp=temp->next;
        i++;
    }
    temp1=temp->next->next;//incrementing the temp1 by 2.. {temp=temp->next is using for incrementing to next node}
    free(temp->next);
    temp->next=temp1;
}
void del_from_end()
{
    struct node *temp;
    temp=head;
    while(temp->next->next!=NULL)//to stop the temp value before the null node..
    {
        temp=temp->next;//incrementing the temp to next node
    }
        linker=temp;
        free(temp->next);
    
}
void main()
{
    for (int i = 0; i < 5; i++)
    {
        insertion();
    }
    display();
    delete_from_start();
    printf("after deleting!!!!!!!!\n");
    display(); // after deleting the element
    insert_From_start();
    printf("after inserting from start\n");
    display();
    random_insert();
    printf("after random inserting>>>>>>>>\n");
    display();
    random_del();
    printf("after random deling \n");
    display();
    del_from_end();
    printf("after random deleting \n");
    display();
}