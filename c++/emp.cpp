#include <iostream>
using namespace std;
struct emp
{
    int basic_ic;
    float income_tax;
    float da;
};
int main()
{
    struct emp s1[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> s1[i].basic_ic;
        cin >> s1[i].income_tax;
        cin >> s1[i].da;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << s1[i].basic_ic - (s1[i].basic_ic * s1[1].income_tax * s1[i].da);
    }
}