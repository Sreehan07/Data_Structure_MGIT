#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
};
int main()
{
    struct student s1;
    s1.rollno=111;
    s1.name="sreehan";
    cout<<s1.name;
    cout<<s1.rollno;
}