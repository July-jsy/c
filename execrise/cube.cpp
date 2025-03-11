#include "cube.h"
void Cube::inPut()
{
    cin >> length;
    cin >> width;
    cin >> height;
}
int Cube::volume()
{
    return length * width * height;
}
void Cube::show()
{
    cout << Cube::volume() << '\n';
}