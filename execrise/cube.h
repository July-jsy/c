#ifndef CUBE_H
#define CUBE_H
#include <iostream>
using namespace std;
class Cube
{
private:
    int length, width, height;

public:
    void inPut();
    int volume();
    void show();
};

#endif