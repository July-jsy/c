#include "fan.h"
Fan::Fan(string n, double p)
{
    brand = n;
    price = p;
}

Fan::~Fan()
{
}
void Fan::wind()
{
    cout << brand << ' ' << price << '\n';
}