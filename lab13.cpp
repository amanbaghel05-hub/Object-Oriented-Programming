//default consstructor
#include<iostream>
using namespace std;
class student
{
  public:
  string name;
  int marks;
student(){
   name="Aman";
   marks=99;
}

void display(){
     cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
}
    
};

int main(){
    student obj;
    obj.display();
    return 0;
}



