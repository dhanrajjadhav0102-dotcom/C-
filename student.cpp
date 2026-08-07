#include <iostream>
using namespace std;
class studentId
{
    public:
    int rollno;
    string name;
    string div;
public:
    void get()
    {
        cout << "Enter Roll number : ";
        cin >> rollno;
        cout << "Enter Name        : ";
        cin >> name;
        cout << "Enter Division    : ";
        cin >> div;
    }
    void give()
    {
    cout << "Enter Roll number : " <<rollno<<endl;
    cout << "Name              : " <<name<<endl;
    cout << "Enter Divison     : " << div<<endl;
    }
};
int main()
{
    studentId e;
    
    e.get();
    e.give();
    return 0;
}