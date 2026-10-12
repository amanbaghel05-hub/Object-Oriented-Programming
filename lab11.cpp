#include<iostream>
using namespace std;
    class student{
    public:
        string name;
        int marks;

        int display();

    };

    int student::display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }

int main(){
    student s1;
    cout<<"Enter Student name: "<<endl;
    cin>>s1.name;
    cout<<"Enter marks: "<<endl;
    cin>>s1.marks;
    s1.display();

    return 0;
}