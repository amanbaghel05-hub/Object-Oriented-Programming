#include <iostream>
using namespace std;

class employee
{
public:
    int id, salary;
    string name;
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    employee e1;
    e1.id = 007;
    e1.name = "aman";
    e1.salary = 1000000;
    e1.display();

    return 0;
}
