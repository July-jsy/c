#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 1.动态申请变量空间
    int *p = new int;
    *p = 20;
    cout << *p << '\n';
    // 释放
    delete p;
    int *p2 = new int(30); // 申请空间加赋值
    cout << *p2 << '\n';
    delete p2;
    return 0;
}
