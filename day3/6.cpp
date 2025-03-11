#include <iostream>
using namespace std;
class Stu
{
private:
    int age;
    string name;

public:
    void setAge(int a)
    {
        if (a < 120)
        {
            age = a;
        }
    }
    int getAge()
    {
        return age;
    }
    void setName(string a)
    {
        name = a;
    }
    string getName()
    {
        return name;
    }
};
