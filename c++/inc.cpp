#include <iostream>
using namespace std;
struct inc
{
    /* data */
    int b_i;
    float in_tax;
    float da;
};
int main()
{
    struct inc s1[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> s1[i].b_i;
        cin >> s1[i].in_tax;
        cin >> s1[i].da;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << s1[i].b_i - (s1[i].b_i * s1[i].in_tax * s1[i].da) << endl;
    }
}
// bi-(bi*in_tax*da)