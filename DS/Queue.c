#include<stdio.h>

int array[5];
int front=-1;
int back=-1;

void push(int x) {
    if(back == 5 - 1){
        printf("queue overflow\n");

    }
    back++;
    array[back]=x;
    if(front == -1) {
        front++;
    }
}
void pop(){
    if (front == -1 || front > back) {
        printf("no elements in queue\n");
    }
    front++;
}
int peek() {
    if (front == -1 || front > back) {
        printf("No elements in queue\n");
        return -1;
    }
    return array[front];
}
void main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("%d",peek());
    pop();
}