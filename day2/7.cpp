#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *p = new int[5];
    // c++11允许
    int *p2 = new int[5]{1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << '\n';
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p2[i] << '\n';
    }
    delete[] p;
    return 0;
}
