#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *pointer; // THis is used to store the address of another node
};

// NOTE: we use -> when we are dealing with pointer to structure

// We are nick naming the struct Node -> node
typedef struct Node node;

// 1) We need to store head of linked list
node *head = NULL;

// 2) We need to create new nodes
node *newnode = NULL;

// 3) We need to link new nodes
node *linker = NULL;

// Insert from end
void insertfromend(int data)
{
    // Now lets create a node
    newnode = (node *)malloc(sizeof(node));

    // Let's insert data into node
    newnode->data = data;

    // Let's initialize the head if and only if head is empty
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        // This is used to link previous node to new node by storing the address
        linker->pointer = newnode;
    }

    // Updating the linker to newnode
    linker = newnode;
}

void main()
{
    for (int i = 1; i <= 3; i++)
    {
        insertfromend(i);
    }

}
