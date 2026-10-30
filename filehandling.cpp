#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("student.txt");

    string name;
    int roll;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll;

    fout << "Name: " << name << endl;
    fout << "Roll Number: " << roll << endl;

    fout.close();

    ifstream fin;
    fin.open("student.txt");

    string data;

    while (getline(fin, data))
    {
        cout << data << endl;
    }

    fin.close();

    return 0;
}
