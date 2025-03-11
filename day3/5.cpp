#include <iostream>
using namespace std;
class Array
{
private:
    int age;

public:
    string name;

    void initInfo(string n, int a)
    {
        name = n;
        age = a;
    }
};
int main(int argc, char const *argv[])
{
    Array *p = new Array;
    p->initInfo("lisi", 12);
    cout << p->name << '\n';
    delete p;

    return 0;
}
