#include<iostream>
using namespace std;

void function(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"this <a> swapped value"<<*a<<endl<<"this is <b> swapped value"<<*b;
}
int main()
{
    int c,s;
    cout<<"enter the c value"<<endl;
    cin>>c;
    cout<<"enter the s value"<<endl;
    cin>>s;
    function(&c,&s);
}