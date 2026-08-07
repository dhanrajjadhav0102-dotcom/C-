#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;
public:
    void input()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }
    void calculate()
    {
        float area=3.14*radius*radius;
        float circumference=2*3.14*radius;
        cout<<"Area="<<area<<endl;
        cout<<"Circumference= "<<circumference<< endl;
    }
};
int main()
{
    Circle c;
    c.input();
    c.calculate();
    return 0;
}