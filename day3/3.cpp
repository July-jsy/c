#include <iostream>
using namespace std;
class Array
{

public:
    int arr[3][4];
    void print(char a = ' ')
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                arr[i][j] = j + i;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (j < 3)
                {
                    cout << arr[i][j] << a;
                }
                else
                {
                    cout << arr[i][j];
                }
            }
            cout << '\n';
        }
    }
};
int main(int argc, char const *argv[])
{
    // 栈空间
    Array arr;
    arr.print();
    arr.print('#');
    // 堆空间
    Array *p = new Array;
    p->print();
    delete p;

    return 0;
}
