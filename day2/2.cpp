#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
// #include <windows.h>
#include <unistd.h>
using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(0));
    string name[] = {"xm", "xb", "xz"};
    while (1)
    {
        cout << name[rand() % 3] << '\n';
        sleep(1);
    }

    return 0;
}
