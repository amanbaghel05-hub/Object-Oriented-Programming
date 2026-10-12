#include<iostream>
using namespace std;
    class rectangle{
    public:
        int length;
        int breadth;

       inline int calculateArea();

    };

    inline int rectangle::calculateArea(){
        cout<<"Area of rectangle: "<< length * breadth <<endl;
       
    }

int main(){
     rectangle r1;
    cout<<"Enter length: "<<endl;
    cin>>r1.length;
    cout<<"Enter Breadth: "<<endl;
    cin>>r1.breadth;
    r1.calculateArea();

    return 0;
}