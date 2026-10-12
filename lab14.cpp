#include<iostream>
using namespace std;
class employee
{
    public:
    int id, salary;
    employee()
    {
        id=101;
        salary=2000000;
    }

    void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
};

int main(){
    employee e1;
    e1.display();
    return 0;

}
