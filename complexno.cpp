#include <iostream>
using namespace std;
class Complex {
    int a;
    int b;
public:
    void setdata() {
        cout <<"Enter real part: ";
        cin >> a;
        cout <<"Enter imaginary part: ";
        cin >> b;
    }
    Complex add(Complex c) {
        Complex sum;
        sum.a=a+c.a;
        sum.b=b+c.b;
        return sum;
    }
    Complex sub(Complex c) {
        Complex sub;
        sub.a=a-c.a;
        sub.b=b-c.b;
        return sub;
    }
    void display() {
        cout <<a<<" + "<<b<<"i"<<endl;
    }
};
int main() 
{
    Complex c1, c2, sum , sub;
    c1.setdata();
    c2.setdata();
    sum = c1.add(c2);
    sub=c1.sub(c2);
    cout << "Sum of complex numbers: ";
    sum.display();
    cout << "Substraction of complex numbers: ";
    sub.display();
    return 0;
}