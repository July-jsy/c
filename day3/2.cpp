#include <iostream>
using namespace std;
class Circle
{
public:
    double radius;
    // 引用传递
    // void setRadius(double &radius)
    // {
    //     cin >> radius;
    // }
    // 地址传递
    // void setRadius(double *radius)
    // {
    //     cin >> *radius;
    // }
    // 值传递
    void setRadius(double r)
    {

        radius = r;
    }
    void getLength()
    {
        cout << 2 * 3.14 * radius << '\n';
    }
    void getArea()
    {
        cout << 3.14 * radius * radius << '\n';
    }
};
int main(int argc, char const *argv[])
{
    Circle cir;

    // cir.setRadius(&cir.radius);//地址传递
    // cir.setRadius(cir.radius); // 引用传递

    // 值传递
    int r;
    cin >> r;
    cir.setRadius(r);

    cir.getLength();
    cir.getArea();
    return 0;
}
