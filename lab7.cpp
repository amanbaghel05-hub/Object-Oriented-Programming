#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int marks;
    int result;

    void display();
    void checkResult();
};

void student::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"marks: "<<marks<<endl;
}

void student::checkResult()
{
    if (marks>=40)
    {
        cout<<"Result: pass"<<endl;

    }else{
        cout<<"result: fail"<<endl;
    }
    
}

int main(){
    student s1;
    s1.name="Aman";
    s1.marks=99;
    s1.display();
    s1.checkResult();

    return 0;
}