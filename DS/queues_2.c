#include<stdio.h>
int a=0;
int stack[5];
void push(int data)
{
    if(a==5)
    {
        printf("stack is full>>>>");

    }
    else{
        stack[a]=data;
        a++;
    }

}
void display()
{
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",stack[i]);
    }

}
void pup()
{
    if(a==0)
    {
        printf("stack is empty>>>>");
    }
    else{
        stack[a]=0;
        a--;
    }
    
}
void main()
{
    for(int i=1;i<=5;i++)
    {
        push(i*10);
    }
    display()
    for(i=0;i<=5;i++)
    {
        pup();
    }
}