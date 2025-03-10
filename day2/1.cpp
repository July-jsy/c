#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string str1; // 在堆区动态申请空间保存字符串内容
    string str2 = "hello";
    string str3("world");
    string str4(str2);
    string str5 = str2;
    cout << str2 << endl
         << str3 << '\n'
         << str4 << '\n'
         << str5 << '\n';

    return 0;
}
