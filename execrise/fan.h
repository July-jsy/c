#ifndef FAN_H
#define FAN_H
#include <iostream>
#include <string>
using namespace std;
class Fan
{
private:
    string brand;
    double price;

public:
    Fan(string n = "xiaomi", double p = 0.0);
    ~Fan();
    void wind();
};

#endif