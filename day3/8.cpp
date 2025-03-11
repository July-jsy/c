#include <iostream>
using namespace std;
class Stu
{
private:
    int age;

public:
    Stu();
    Stu(int n);
    ~Stu();
    void print();
};

Stu::Stu()
{

    cout << "..." << '\n';
}
Stu::Stu(int n)
{
    age = n;
    cout << "!" << '\n';
}
void Stu::print()
{
    cout << age << '\n';
}

Stu::~Stu()
{
}
int main(int argc, char const *argv[])
{
    Stu s(2);
    s.print();
    return 0;
}
