#include <iostream>
using namespace std;
bool isLeapYear(int year = 2016);
bool isLeapYear(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? true : false;
    // return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0;
}
int main(int argc, char const *argv[])
{
    cout << boolalpha << isLeapYear() << '\n';
    return 0;
}
