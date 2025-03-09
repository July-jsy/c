#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool a;
    cout << sizeof(bool) << " " << sizeof(a) << endl;
    a = 19;
    cout << "a is " << a << endl;
    cout << boolalpha << a << endl;
    cout << noboolalpha << a << endl;
    return 0;
}
