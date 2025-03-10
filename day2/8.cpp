#include <iostream>
using namespace std;
void show()
{
    cout << "show.." << '\n';
}
void show(int num)
{
    cout << "int..." << '\n';
}
void show(int num, char a)
{
    cout << "int char..." << '\n';
}
void show(int num, string str)
{
    cout << "int string..." << '\n';
}
void dev(int a, int b)
{
    cout << a / b << '\n';
}
void dev(float a, float b)
{
    double dev = a / b;
    cout << dev << '\n';
}

int main(int argc, char const *argv[])
{
    show();
    show(12);
    show(1, 'a');
    show(1, "hello");
    dev(4, 2);
    dev(6.2f, 2.1f);
    return 0;
}
