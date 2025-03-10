#include <iostream>
using namespace std;
/*默认参数（缺省参数）
1.形参中给了一个默认的值
2.形参的值取决于实参是否给值
3.多个参数时，给默认参数的规则为：从右侧开始有默认值
*/
void fun(int a = 1)
{
    cout << a << '\n';
}
void fun1(int a = 1, int b = 2, int c = 3) // 全缺省参数
{
    cout << "a:" << a << "b:" << b << "c:" << c << '\n';
}
void fun2(int a, int b, int c = 3) // 半缺省参数
{
    cout << "a:" << a << "b:" << b << "c:" << c << '\n';
}
int main(int argc, char const *argv[])
{
    fun();
    fun(12);
    fun1();
    fun2(1, 1, 1);
    return 0;
}
