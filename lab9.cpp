#include<iostream>
using namespace  std;
class A{
    public:
    
    inline void showmessage()
    {
        cout<<"Hello world"<<endl;
    }
};
int main()
{
    A obj;
    obj.showmessage();
    obj.showmessage();
    obj.showmessage();

    return 0;
}