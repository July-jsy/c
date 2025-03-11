#include "fan.h"
int main(int argc, char const *argv[])
{
    Fan fan("media", 22.2);
    fan.wind();

    Fan *p = new Fan;
    p->wind();
    delete p;

    return 0;
}
