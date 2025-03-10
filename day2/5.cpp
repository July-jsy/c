#include <iostream>
using namespace std;
int &fun()
{
    static int num = 10;
    cout << num << '\n';
    return num;
}
int main(int argc, char const *argv[])
{
    fun() = 20;
    cout << fun() << '\n';
    fun();
    int &t = fun();
    t = 10;
    fun();
    return 0;
}
