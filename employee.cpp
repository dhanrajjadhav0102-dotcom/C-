#include <iostream>
using namespace std;
class Employee
{
    public:
    int empId;
    string name;
    float salary;
public:
    void get()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void give()
    {
    cout << "Employee ID : " <<empId<<endl;
    cout << "Name        : " <<name<<endl;
    cout << "Salary      : " << salary<<endl;
    }
};
int main()
{
    Employee e;
    e.empId=101;
    e.get();
    e.give();
    return 0;
}