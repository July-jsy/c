#include <iostream>
using namespace std;
struct student
{
    /* data */
};
class Cat
{
public:
    string name;
    int age;
    void eat()
    {
        cout << name << " eat bread" << '\n';
    }
    void drink()
    {
        cout << name << " eat juice" << '\n';
    }
};

int main(int argc, char const *argv[])
{
    Cat tom;
    tom.name = "tom";
    tom.age = 18;
    tom.eat();
    tom.drink();
    return 0;
}
