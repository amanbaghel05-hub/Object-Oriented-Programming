#include<iostream>
using namespace  std;
class student
{
    public:
     string name;
     int marks;
   void display();
};

void student::display()
{
  cout<<"Name: "<<name<<endl;
  cout<<"Marks: "<<marks<<endl;
}


int main(){
    student s1;
    s1.name="Aman";
    s1.marks=99;
    s1.display();

    student s2;
    s2.name="Rahul";
    s2.marks=95;
    s2.display();


    
     if (s1.marks > s2.marks)
    {
        cout<<"Aman has higher maarkss "<<endl;
    }
    else{
        cout<<"Rahul has higher marks"<<endl;
    }
    return 0;
}