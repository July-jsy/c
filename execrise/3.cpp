#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *p = new int[4]();
    int sum = 0, min, max;
    for (int i = 0; i < 4; i++)
    {
        cin >> p[i];
    }
    min = p[0];
    max = p[0];
    for (int i = 0; i < 4; i++)
    {
        sum += p[i];
        if (max < p[i])
        {
            max = p[i];
        }
        if (min > p[i])
        {
            min = p[i];
        }
    }
    cout << sum / 4.0 << ' ' << max << " " << min << '\n';
    delete[] p;
    return 0;
}
