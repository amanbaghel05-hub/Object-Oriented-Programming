#include<iostream>
using namespace std;
class student
{
    public:
     string name;
     int marks;
      
   void  display()
   {
        cout<<"Student : "<< name<<endl ;
        cout<<"Marks: " << marks<<endl;
        
   }

 
   

};
int main()
{
    student s1;
    s1.name="Aman";
    s1.marks=95;
    s1.display();
   
    student s2;
    s2.name="Rahul";
    s2.marks=85;
    s2.display();


    if (s1.marks>s2.marks)
    {
        cout<<"Aman has higher marks";
    }
    

    return 0;
}
