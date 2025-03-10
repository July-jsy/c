#include <iostream>
#include <string>
#define N 5

using namespace std;

struct Student
{
    string name;
    string num;
};

void inputStudentInfo(Student *s)
{
    for (int i = 0; i < N; i++)
    {
        cout << "输入学生姓名和学号 " << i + 1 << ": ";
        cin >> s[i].name >> s[i].num;
    }
}

void findStu(Student *s, string searchName)
{
    for (int i = 0; i < N; i++)
    {
        if (s[i].name == searchName)
        {
            cout << "学生为: " << s[i].name << " " << s[i].num << endl;
            return;
        }
    }
    cout << "未找到" << endl;
}

int main()
{
    Student students[N];
    inputStudentInfo(students);
    string searchName;
    cout << "查找学生: ";
    // cin >> searchName;
    cin.ignore();
    getline(cin, searchName);
    findStu(students, searchName);
    return 0;
}