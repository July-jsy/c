#include <iostream>
using namespace std;
namespace teacher
{
    // 变量,函数,结构体
    char name[10] = "rose";
    int age = 14;
    void showname()
    {
        cout << name << endl;
    }
}
namespace worker
{
    char name[10] = "lihua";
    int age = 12;
    void showname()
    {
        cout << name << endl;
    }
}
int age = 12;
using namespace teacher;
using namespace worker;
int main(int argc, char const *argv[])
{
    int age = 11;
    teacher::showname();
    cout << age << endl
         << teacher::age << endl
         << ::age << endl;

    return 0;
}
