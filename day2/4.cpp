#include <iostream>
using namespace std;
void fun(int &a)
{
    a = 100;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    int num = 3;
    fun(num);
    cout << num << endl;
    int num1 = 3, num2 = 2;
    swap(num1, num2);
    cout << num1 << num2 << endl;
    return 0;
}
