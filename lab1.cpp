#include<iostream>
using namespace std;
 
class student
{
public:
   string name;
   int age;

   void display()
   {
    cout<<"name is"<<name<<endl;
    cout<<"age is"<<age<<endl;
   }
};
int main()
{
    student s1;
    s1.name="aman";
    s1.age=19;
    s1.display();
}

