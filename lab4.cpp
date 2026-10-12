#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;

    void calculationArea()
    {

        cout << "Area of Rectangle 1: " << length * breadth<<endl;
    }

     void calculationArea1()
    {

        cout << "Area of Rectangle 2: " << length * breadth<<endl;
    }
    
};

int main()
{
    rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    r1.calculationArea();
 
    rectangle r2;
    r2.length =8;
    r2.breadth = 4;
    r2.calculationArea1();
    return 0;
}