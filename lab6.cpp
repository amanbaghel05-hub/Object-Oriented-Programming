#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int marks;
    void display();
};
 void student::display(){
    cout<<"name:"<<" "<<name<<endl;
    cout<<"marks:"<<" "<<marks<<endl;
 }

 int main(){
    student s1;
    s1.name="aman";
    s1.marks=100;
  
    s1.display();
    return 0;
 }
