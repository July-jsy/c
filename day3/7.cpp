#include <iostream>
using namespace std;
class Stu
{
private:
    int age;
    string name;

public:
    void setName(string n);
    string getName();
};
void Stu::setName(string n)
{
    name = n;
}
string Stu::getName()
{
    return name;
}
int main(int argc, char const *argv[])
{
    Stu xm;
    xm.setName("xm");
    cout << xm.getName() << '\n';
    return 0;
}
