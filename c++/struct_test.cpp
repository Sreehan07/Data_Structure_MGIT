#include<iostream>
using namespace std;
struct struct_test
{
    /* data */
    int rollno;
    string name;

};
int main()
{
    struct struct_test s1;
    s1.name="look";
    s1.rollno=1009;
    cout<<s1.name<<endl;
    cout<<s1.rollno;
}