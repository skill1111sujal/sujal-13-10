#include<iostream>
using namespace std;
class Test
{
    int r,i;
public:
    void setdata(int a,int b)
    {
        r = a,
        i = b;
    }
    void getdata()
    {
        cout<<"num is :"<<r<<"t"<<i<<"i"<<endl;
    }
    friend Test operator++(Test);
    
};
Test operator++(Test t)
{
    Test a;
    a.r = ++t.r;
    a.i = ++t.i;
    return a;
}
int main()
{
    Test a,b;
    a.setdata(12,30);
    cout<<"Befour increment  :"<<endl;
    a.getdata();
    b=++a;
    cout<<"After increment :"<<endl;
    b.getdata();
}