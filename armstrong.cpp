#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, temp, rem, cube = 0;

    cin >> n;

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        cube=cube+pow(rem,3);
        n = n / 10;
    }
    cout<<"Sum: "<<cube<<endl;
    if (cube == temp)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}