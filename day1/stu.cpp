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
        cout << "Enter name and number for student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].num;
    }
}

void findStu(Student *s, string searchName)
{
    for (int i = 0; i < N; i++)
    {
        if (s[i].name == searchName)
        {
            cout << "Student found: " << s[i].name << " " << s[i].num << endl;
            return;
        }
    }
    cout << "not found" << endl;
}

int main()
{
    Student students[N];
    inputStudentInfo(students);
    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;
    findStu(students, searchName);
    return 0;
}