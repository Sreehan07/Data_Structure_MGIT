#include<iostream>
using namespace std;
class emp
{
    public:
    int roll;
    string name;
    void function();
    void display();
};
void emp::function()
{
    cout<<"enter the values";
    cin>>this->roll;
    cin>>this->name;
}
void emp::display()
{
    cout<<roll<<endl;
    cout<<name<<endl;
}
int main()
{
    class emp v1[3];
    for(int i=0;i<3;i++)
    {
        v1[i].function();
    }
    for(int i=0;i<3;i++)
    {
        v1[i].display();
    }
}
