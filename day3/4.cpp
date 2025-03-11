#include <iostream>
using namespace std;
class Array
{

public:
    int *p;
    void init()
    {
        p = new int[4];
        for (int i = 0; i < 4; i++)
        {
            p[i] = i;
        }
    }
    void print()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << p[i] << '\n';
        }
    }
    void release()
    {
        delete[] p;
    }
};
int main(int argc, char const *argv[])
{
    Array *p = new Array;
    p->init();
    p->print();
    p->release();
    delete p;
    return 0;
}
