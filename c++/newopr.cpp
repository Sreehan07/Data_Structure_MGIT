#include <iostream>
using namespace std;
int main()
{
    int *abc = new int[10];
    for (int i = 0; i < 10; i++)
    {
        abc[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << abc[i] << endl;
    }
    delete[] abc;
    cout << "after del" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << abc[i];
    }
}