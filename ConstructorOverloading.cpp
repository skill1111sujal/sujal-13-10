#include<iostream>
using namespace std;

class test 
{
    public:
    test()
    {
        cout<<"Default constructor is called ..."<<endl;
    }
    test(int a)
    {
        cout<<"Parameterized con. a:"<<a<<endl;
    }
    test(int x, int y)
    {
        cout<<"two Parameterized con. x + y:"<<x+y<<endl;
    }
    test(int x, int y, int z)
    {
        cout<<"Three Parameterized con. x + y + z:"<<x + y + z<<endl;
    }    
};

int main()
{
    test a(),b(20),c(34,67),d(3,8,9);
}