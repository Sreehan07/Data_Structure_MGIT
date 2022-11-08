#include<stdio.h>
// declare array for stacks
int Stack[10];

// create a stack pointer which points if the stack is full or empty
int sp = 0;

// function to push elements into stack
void push(int a)
{
    // checking for overflow condition
    if (sp >= 10)
    {
        printf("Bhai bolthe chaddi kholthe: \n");
    }
    else
    {
        Stack[sp] = a;
        sp += 1;
    }
}

void display()
{
  for(int index = 0; index < 10; index ++)
  {
    printf("%d\n", Stack[index]);
  }
}

void pop()
{
  if(sp == 0)
  {
    printf("kuch bhi nahi hai bhai stack me\n");
  }
  else
  {
    sp-=1;
    Stack[sp] = 0;
  }
}

void main()
{
  for(int i = 1; i < 15; i ++)
  {
    push(i * 10);
  }
  printf("---------------------------------- Chaddi kholthe --------------------\n");
  display();
  printf("--------------------------------- Print bolthe public ---------------\n");
  for(int i = 1; i < 15; i++)
  {
    pop();
  }
  
}
