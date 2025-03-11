#include <iostream>
using namespace std;
class MyArray
{
private:
    int *p;
    int length;

public:
    void input(int len)
    {
        cin >> len;
        length = len;
        p = new int(len);
        for (int i = 0; i < len; i++)
        {
            p[i] = i;
        }
    }
    int max()
    {
        int max = p[0];
        for (int i = 0; i < length; i++)
        {
            if (max < p[i])
            {
                max = p[i];
            }
        }
        return max;
    }
    int min()
    {
        int min = p[0];
        for (int i = 0; i < length; i++)
        {
            if (min > p[i])
            {
                min = p[i];
            }
        }
        return min;
    }
    int avg()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += p[i];
        }
        return sum / length;
    }
    void release()
    {
        delete[] p;
    }
};
int main(int argc, char const *argv[])
{
    MyArray *p = new MyArray;
    int len;
    p->input(len);
    int max = p->max();
    int min = p->min();
    int avg = p->avg();
    cout << max << min << avg << '\n';
    p->release();
    delete p;
    return 0;
}
