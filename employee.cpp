#include <iostream>
using namespace std;

class Employee
{
    public:
    int empId;
    string name;
    float salary;
    
};

int main()
{
    Employee e;
    e.empId = 101;
    e.name = "Dhanraj Jadhav";
    e.salary = 50000.0;
    cout << "Employee ID: " << e.empId << endl;
    cout << "Employee Name: " << e.name << endl;
    cout << "Employee Salary: " << e.salary << endl;
    return 0;
}