#include<iostream>
using namespace std;
void swap(int a,int b);


int main()
{
    int d,c;
    cin>>d;
    cin>>c;
    swap(d,c);

}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"after swapping"<<endl;
    cout<<b<<"after swapping";

}