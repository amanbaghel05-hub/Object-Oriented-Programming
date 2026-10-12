#include<iostream>
using namespace  std;
class A{
    public:
     string name;

    inline void display()
    {
        cout<<"Student Name: "<<name<<endl;
    }
};
int main()
{
    A obj;
    obj.name="Aman";
    obj.display();
    obj.display();

    return 0;
}